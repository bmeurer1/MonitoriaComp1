#include <stdio.h>

int main(int argc, char const *argv[])
{
	float M[12][12];
	int C;
	char car;

	//Le a coluna e caracter
	scanf("%d\n%c", &C, &car);

	//Le os valores da matriz
	int i, j;
	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			scanf("%f", &M[i][j]);
		}
	}

	//Faz a soma da coluna em questao
	float sum = 0;
	for(i = 0; i < 12; i++){
		sum += M[i][C];
	}

	//Se S, soh faz a soma, senao
	//faz a media
	if(car == 'S'){
		printf("%.1f\n", sum);	
	}else{
		printf("%.1f\n", sum/12);
	}

	return 0;
}