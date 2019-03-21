#include <stdio.h>

#define PI 3.14159

int main(int argc, char const *argv[])
{	
	int   tempo;
	int anos, meses, dias;

	//Le o numero, horas trabalhadas e salario
	scanf("%d", &tempo);

	//Anos sao calculados dividindo o total
	//de dias pela quantidade de dias em um ano
	//(Uma divisao de int's sera truncada)
	anos   =  tempo/365;

	//Meses são calculados da mesma maneira,
	//porem descontando a quantidade de tempo
	//que já foi calculada nos anos
	meses   = (tempo - (anos * 365))/30;

	//Os dias sao o tempo que sobra
	dias = (tempo - (anos * 365) - (meses*30));

	//Imprime o tempo em horas:minutos:segundos
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	return 0;
}