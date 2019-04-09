#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Comeca do valor 2 e dá saltos de 2
	//em 2 para dar print apenas nos pares
	int i;
	for(i = 2; i <= 100; i += 2){
		printf("%d\n", i);
	}
	return 0;
}