#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Declara variaveis
	int N, X, i;
	char tipo;
	int coelhos = 0, ratos = 0, sapos = 0;
	float cobaias = 0;
	
	//Le a quantidade de casos de teste
	scanf("%d", &N);

	//Faz um loop por todos os casos de teste
	for(i = 0; i < N; i++){

		//Le os valores do caso de teste
		scanf("%d %c", &X, &tipo);

		//Checa o tipo de animal e incrementa
		// o total de acordo
		if(tipo == 'C'){
			coelhos += X;
		}else if(tipo == 'R'){
			ratos += X;
		}else if(tipo == 'S'){
			sapos += X;
		}

		//Incrementa o total de animais usados
		cobaias += X;
	}

	//Escreve a quantidade de cada animal
	printf("Total: %.0f cobaias\n", cobaias);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2f %%\n", (coelhos/cobaias) * 100);
	printf("Percentual de ratos: %.2f %%\n", (ratos/cobaias) * 100);
	printf("Percentual de sapos: %.2f %%\n", (sapos/cobaias) * 100);

	return 0;
}