#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x, y;

	//Ler a senha pela primeira vez
	scanf("%d %d", &x, &y);

	//Enquanto um nao for 0
	//continuar lendo
	while(x != 0 && y != 0){
		
		if(x > 0){
			if(y > 0){
				printf("primeiro\n");
			}else{
				printf("quarto\n");
			}
		}else{
			if(y > 0){
				printf("segundo\n");
			}else{
				printf("terceiro\n");
			}
		}
		
		//Ler o proximo conjunto de valores
		scanf("%d %d", &x, &y);
	}

	return 0;
}