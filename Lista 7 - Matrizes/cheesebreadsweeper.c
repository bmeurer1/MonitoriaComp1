#include <stdio.h>

int main(int argc, char const *argv[])
{
	int M, N, left_pos = -1, flag = 0, line = -1;

	while(scanf("%d %d", &M, &N) != EOF){

		//Cria matrizes com colunas e linhas a mais
		//do que o necessario para evitar if's
		//mais a frente
		int mat[M+2][N+2], mat2[M+2][N+2];

		//Le os valores da matriz
		int i, j;

		//Preenche as matrizes com 0
		for(i = 0; i < M+2; i++){
			for(j = 0; j < N+2; j++){
				mat[i][j] = 0;
			}
		}

		//Le os valores de entrada
		for(i = 1; i <= M; i++){
			for(j = 1; j <= N; j++){
				scanf("%d", &mat[i][j]);
			}
		}


		for(i = 0; i < M+1; i++){
			for(j = 0; j < N+1; j++){
		
				//Se o valor na matriz 1 for 1,
				//colocar 9 na matriz 2
				if(mat[i][j] == 1){
					mat2[i][j] = 9;
				
				//Caso contrario, somar todos os valores 
				//em volta daquela posicao
				}else{

					mat2[i][j] = mat[i-1][j] + mat[i][j-1] + mat[i+1][j] + mat[i][j+1];
					
				}
			}
		}
		
		//Exibe o resultado
		for(i = 1; i < M+1; i++){
			for(j = 1; j < N+1; j++){
				printf("%d", mat2[i][j]);
			}
			printf("\n");
		}

	}

	return 0;
}