#include <stdio.h>

int main(int argc, char const *argv[])
{

	int x[20];
	int i;

	//Le todos os valores
	for(i = 0; i < 20; i++){
		scanf("%d", &x[i]);
	}

	//Inverte o vetor
	for(i = 0; i < 10; i++){
		int temp = x[i];
		x[i] = x[19-i];
		x[19-i] = temp;
	}

	for(i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, x[i]);
	}

	return 0;
}