#include <stdio.h>

int main(int argc, char const *argv[])
{

	int x[10];
	int val;
	int i;

	//Le o valor e coloca na primeira posicao
	//do vetor
	scanf("%d", &val);

	x[0] = val;

	//Cada posicao recebe 2x o valor da
	//posicao anterior
	for(i = 1; i < 10; i++){
		x[i] = x[i-1] * 2;
	}

	//Imprime os valores das posicoes
	for(i = 0; i < 10; i++){
		printf("N[%d] = %d\n", i, x[i]);	
	}

	return 0;
}