#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Declara os 2 valores a serem lidos
	int codigo, qte;

	//Le os valores
	scanf("%d %d", &codigo, &qte);

	//Calcula o valor a ser pago baseado no
	//codigo inserido
	if(codigo == 1){
		float total = qte * 4.0;
		printf("Total: R$ %.2f\n", total);

	}else if(codigo == 2){
		float total = qte * 4.5;
		printf("Total: R$ %.2f\n", total);
	
	}else if(codigo == 3){
		float total = qte * 5.0;
		printf("Total: R$ %.2f\n", total);
	
	}else if(codigo == 4){
		float total = qte * 2.0;
		printf("Total: R$ %.2f\n", total);
		
	}else if(codigo == 5){
		float total = qte * 1.5;
		printf("Total: R$ %.2f\n", total);
	}

	return 0;
}