#include <stdio.h>

#define PI 3.14159

int main(int argc, char const *argv[])
{	
	int   numero, horas;
	float qte_por_hora;

	//Le o numero, horas trabalhadas e salario
	scanf("%d", &numero);
	scanf("%d", &horas);
	scanf("%f", &qte_por_hora);

	//Calcula 
	float salario = qte_por_hora * horas;

	//Imprime o valor da diferenca
	printf("NUMBER = %d\n", numero);
	printf("SALARY = U$ %.2f\n", salario);
	return 0;
}