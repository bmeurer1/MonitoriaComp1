#include <stdio.h>

int main(int argc, char const *argv[])
{

	int par[5], impar[5];
	int val, indice_par = 0, indice_impar = 0;
	int i;

	for(i = 0; i < 15; i++){
		
		//Le o valor
		scanf("%d", &val);

		//Se for par
		if(val % 2 == 0){

			//Insere no vetor e incrementa a posicao do indice
			par[indice_par] = val;
			indice_par++;

			//Se chegou no maximo do vetor, imprime os valores
			if(indice_par == 5){
				int j;
				for(j = 0; j < 5; j++){
					printf("par[%d] = %d\n", j, par[j]);
				}

				//Bota o indice de volta em 0 para reescrever
				indice_par = 0;
			}

		//Mesmo procedimento se for impar
		}else{
			impar[indice_impar] = val;
			indice_impar++;

			if(indice_impar == 5){
				int j;
				for(j = 0; j < 5; j++){
					printf("impar[%d] = %d\n", j, impar[j]);
				}

				indice_impar = 0;
			}
		}

	}

	//Escreve os valores restantes de cada vetor
	if(indice_impar > 0){
		for(i = 0; i < indice_impar; i++){
			printf("impar[%d] = %d\n", i, impar[i]);
		}
	}

	if(indice_par > 0){
		for(i = 0; i < indice_par; i++){
			printf("par[%d] = %d\n", i, par[i]);
		}
	}

	return 0;
}