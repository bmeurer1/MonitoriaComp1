#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	//Declara os 3 valores a serem lidos
	float A, B, C;

	//Le os valores
	scanf("%f %f %f", &A, &B, &C);

	//Se A for 0, vai dar divisao por 0
	if(A == 0){
		printf("Impossivel calcular\n");
		return 0;
	}

	//Transforma B em -B
	B = -1 * B;

	//Calcula o delta e, se for negativo, ja
	//interrompe a execucao
	float delta = (B * B) - (4 * A * C);

	if(delta < 0){
		printf("Impossivel calcular\n");
		return 0;
	}

	//Se passar por todas as condicaoes,
	//calcula as raizes e as mostra na tela
	float raiz1 = (B + sqrt(delta))/(2*A);
	float raiz2 = (B - sqrt(delta))/(2*A);

	printf("R1 = %.5f\n", raiz1);
	printf("R2 = %.5f\n", raiz2);

	return 0;
}