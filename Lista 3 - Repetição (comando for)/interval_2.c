#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Declara variaveis
	int i, N, X, qte_dentro = 0;
	
	//Le a quantidade de casos de teste
	scanf("%d", &N);

	//Faz um loop por todos os casos de teste
	for(i = 0; i < N; i++){

		//Le o valor do caso de teste
		scanf("%d", &X);

		//Checa se esta no intervalo
		if(X >= 10 && X <= 20){
			qte_dentro++;
		}
	}

	//Escreve a quantidade dentro e fora do intervalo
	printf("%d in\n", qte_dentro);
	printf("%d out\n", N - qte_dentro);

	return 0;
}