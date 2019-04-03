#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Declara os valor a ser lido
	float numero;

	//Le o valor
	scanf("%f", &numero);

	//Se numero for menor que 0 ou maior
	//que 100, fora de intervalo
	if(numero < 0 || numero > 100){
		printf("Fora de intervalo\n");
	//Se chegar ate aqui, sabemo que o
	//numero esta entre 0 e 100. Agora
	//basta checar cada intervalo
	//individualmente
	}else if(numero <= 25){
		printf("Intervalo [0,25]\n");
	}else if(numero <= 50){
		printf("Intervalo (25,50]\n");
	}else if(numero <= 75){
		printf("Intervalo (50,75]\n");
	}else if(numero <= 100){
		printf("Intervalo (75,100]\n");
	}

	return 0;
}