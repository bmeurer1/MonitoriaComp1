#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Declara os 2 valores a serem lidos
	float x, y;

	//Le os valores
	scanf("%f %f", &x, &y);

	//Se ambos forem 0, escrever origem
	if(x == 0 && y == 0){
		printf("Origem\n");
		return 0;
	}

	//Se x ou y forem 0, escrevemos o
	//eixo apropriado
	if(x == 0){
		printf("Eixo Y\n");
		return 0;
	}

	if(y == 0){
		printf("Eixo X\n");
		return 0;
	}

	//Se x for maior que 0, so pode
	//ser Q1 ou Q4
	if(x > 0){
		if(y > 0){
			printf("Q1\n");
		}else{
			printf("Q4\n");
		}

	//Caso contrario, so pode ser
	//Q2 ou Q3
	}else{
		if(y > 0){
			printf("Q2\n");
		}else{
			printf("Q3\n");
		}
	}

	return 0;
}