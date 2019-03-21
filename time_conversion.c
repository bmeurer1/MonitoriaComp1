#include <stdio.h>

#define PI 3.14159

int main(int argc, char const *argv[])
{	
	int   tempo;
	int horas, min, seg;

	//Le o numero, horas trabalhadas e salario
	scanf("%d", &tempo);

	//Segundos sao calculados checando quanto
	//falta para o proximo multiplo de 60
	//(Ou seja, quanto falta para o 
	//proximo minuto)
	seg   =  tempo % 60;

	//Analogamente os minutos sao calculados
	//checando quanto falta para a proxima hora
	min   = ((tempo - seg)%3600)/60;

	//As horas sao o tempo que sobra
	horas = (tempo - seg - min)/3600;

	//Imprime o tempo em horas:minutos:segundos
	printf("%d:%d:%d\n", horas, min, seg);
	return 0;
}