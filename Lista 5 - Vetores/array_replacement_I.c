#include <stdio.h>

int main(int argc, char const *argv[])
{

	int x[10];
	int val;
	int i;

	scanf("%d", &val);

	//Le cada um dos valores do array
	for(i = 0; i < 10; i++){
		scanf("%d", &x[i]);
	}

	//Substitui valores nulos ou negativos por 1
	for(i = 0; i < 10; i++){
		if(x[i] == 0 || x[i] < 0){
			x[i] = 1;
		}
	}

	//Imprime o array
	for(i = 0; i < 10; i++){
		printf("X[%d] = %d\n", i, x[i]);	
	}

	return 0;
}