#include <stdio.h>

int main(int argc, char const *argv[])
{

	float x[100];
	int i;

	for(i = 0; i < 100; i++){
		
		//Le o proximo valor
		scanf("%f", &x[i]);

		//Se for <= 10, imprime seu valor e posicao no vetor
		if(x[i] <= 10){
			printf("A[%d] = %.1f\n", i, x[i]);
		}
	}

	return 0;
}