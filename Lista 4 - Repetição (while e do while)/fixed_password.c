#include <stdio.h>

int main(int argc, char const *argv[])
{
	int senha = 0;

	//Ler a senha pela primeira vez
	scanf("%d", &senha);

	//Enquanto senha nao for 2002
	//continuar lendo
	while(senha != 2002){
		printf("Senha Invalida\n");
		scanf("%d", &senha);
	}

	//Se senha valida, acesso permitido
	printf("Acesso Permitido\n");

	return 0;
}