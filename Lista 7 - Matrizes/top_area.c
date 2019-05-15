#include <stdio.h>

int main(int argc, char const *argv[])
{
	double M[12][12];
	char car;

	//Le a coluna e caracter
	scanf("%c", &car);

	//Le os valores da matriz
	int i, j;
	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			scanf("%lf", &M[i][j]);
		}
	}

	//Faz a soma da area em questao
	double sum = 0;
	int buffer = 1;
	int total = 0;
	for(i = 0; i < 5; i++){
		for(j = 0 + buffer; j < 12 - buffer; j++){
			sum += M[i][j];
			total++;
		}
		buffer++;
	}

	//Se S, soh faz a soma, senao
	//faz a media
	if(car == 'S'){
		printf("%.1lf\n", sum);	
	}else{
		printf("%.1lf\n", sum/total);
	}

	return 0;
}