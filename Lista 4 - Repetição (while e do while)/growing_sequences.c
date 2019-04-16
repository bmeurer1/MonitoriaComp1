#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;

	//Le o valor
	scanf("%d", &x);

	//Enquanto o valor nao for 0
	while(x != 0){
		
		//Faz um for para criar a lista
		int i;
		for(i = 1; i <= x; i++){
			//Para evitar erro de apresentacao
			//escreve o ultimo numero de
			//maneira diferente
			if(i == x){
				printf("%d", i);
			}else{
				printf("%d ", i);
			}
		}

		//Pula linha e le o novo valor
		printf("\n");
		scanf("%d", &x);
	}

	return 0;
}