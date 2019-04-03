#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Declara os 4 valores a serem lidos
	int A, B, C, D;

	//Le os valores
	scanf("%d %d %d %d", &A, &B, &C, &D);

	//Vamos checar o contrário das condicoes do problema
	//Se passar em algum dos if's, sabemos que os valores
	//nao devem ser aceitos
	if(B > C){
		if(D > A){
			if(C + D > A + B){
				if(C > 0 && D > 0){
					if(A % 2 == 0){
						//Se chegar aqui, os valores sao validos
						printf("Valores aceitos\n");
						return 0;
					}
				}
			}
		}
	}

	//Se chegar aqui, os valores nao sao validos
	printf("Valores nao aceitos\n");

	return 0;
}