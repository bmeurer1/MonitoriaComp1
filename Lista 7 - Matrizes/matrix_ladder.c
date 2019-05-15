#include <stdio.h>

int main(int argc, char const *argv[])
{
	int M, N, left_pos = -1, flag = 0, line = -1;

	//Le a coluna e caracter
	scanf("%d %d", &M, &N);

	int mat[M][N];

	//Le os valores da matriz
	int i, j;
	for(i = 0; i < M; i++){
		for(j = 0; j < N; j++){
			scanf("%d", &mat[i][j]);
		}
	}


	for(i = 0; i < M; i++){

		//Para cada linha da matriz, checa
		//se ela nao eh inteira composta
		//de zeros. Se nao for, guardar
		//a posicao do numero mais a esquerda
		for(j = 0; j < N; j++){
			if(mat[i][j] != 0){
				left_pos = j;
				line = i;
				break;
			}
		}

		//Se a linha nao for composta de zeros
		//precisamos checar a submatriz
		//composta dos valores a esquerda e abaixo
		//do valor mais a esquerda encontrado
		//Exemplo:
		//
		// 1 2 9 9 9 9
		// 0 0 3 9 9 9
		// 0 0 0 0 5 9
		// 0 0 0 0 0 6
		//
		//Para o numero 3, precisaremos checar a
		//seguinte submatriz:
		//
		// * * * * * *
		// 0 0 3 * * *
		// 0 0 0 * * *
		// 0 0 0 * * *
		//
		//Excluindo o proprio 3, todos os outros
		//valores devem ser 0

		if(left_pos != -1){
			int k;

			//Checa a submatriz
			for(k = i; k < M; k++){
				for(j = 0; j <= left_pos; j++){
					//Ignora o valor da linha mais a esquerda
					//(O 3 no exemplo acima)
					if(k == line && j == left_pos){
						continue;
					}

					//Se os outros valores nao forem todos
					//0, indicar que a matriz nao forma
					//uma escada
					if(mat[k][j] != 0){
						flag = 1;
					}
				}
			}

		//Caso contrario, a linha eh toda composta de zeros
		//precisamos que o resto da matriz abaixo dessa linha
		//seja toda composta de zeros
		}else{
			int k;

			//Checa todo o restante da matriz
			for(k = i; k < M; k++){
				for(j = 0; j < N; j++){

					//Se algum valor nao for zero, indicar
					//que a matriz nao forma uma escada
					if(mat[k][j] != 0){
						flag = 1;
					}
				}
			}
		}

		//Caso a matriz esteja marcada, nao continuar
		if(flag){
			break;
		}

		left_pos = -1;
	}

	//Caso a matriz esteja marcada, printar N, caso contrario, S
	if(flag){
		printf("N\n");
	}else{
		printf("S\n");
	}

	return 0;
}