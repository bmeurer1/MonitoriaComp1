#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Declara variaveis
	int N, i, fatorial = 1;
	
	//Le a quantidade de casos de teste
	scanf("%d", &N);

	//Faz um loop por todos os casos de teste
	for(i = 1; i <= N; i++){
		fatorial *= i;
	}

	printf("%d\n", fatorial);

	return 0;
}