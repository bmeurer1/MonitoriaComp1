#include <stdio.h>

#define PI 3.14159

int main(int argc, char const *argv[])
{	
	double raio;

	//Le o valor do raio
	scanf("%lf", &raio);

	//Calcula a area do circulo
	double area = PI * raio * raio;

	//Imprime a area do circulo
	printf("A=%.4lf\n", area);
	return 0;
}