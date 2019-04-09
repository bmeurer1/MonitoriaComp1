#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Declara variaveis
	int qte_positivos, i;
	float numero, media = 0;

	//loop for que le os 6 valores
	for(i = 0; i < 6; i++){
		scanf("%f", &numero);

		//Se valor positivo, soma 1
		//na quantidade de positivos
		//e adiciona o valor na media
		if(numero > 0){
			qte_positivos++;
			media += numero;
		}
	}

	//Escreve a quantidade de positivos e a media final
	//dos valores positivos
	printf("%d valores positivos\n", qte_positivos);
	printf("%.1f\n", media/qte_positivos);

	return 0;
}