#include <stdio.h>

#define PI 3.14159

int main(int argc, char const *argv[])
{	
	int A, B, C, D;

	//Le os inteiros
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);

	//Calcula a diferenca dos produtos
	int diferenca = (A * B) - (C * D);

	//Imprime o valor da diferenca
	printf("DIFERENCA = %d\n", diferenca);
	return 0;
}