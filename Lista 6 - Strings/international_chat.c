#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int i, N, pessoas, ingles = 0;
	
	//String para guardar as linguas
	char string[20];
	char pessoa[20];

	scanf("%d", &N);

	for(i = 0; i < N; i++){
		
		scanf("%d", &pessoas);
		int j;

		//Le a primeira lingua
		scanf("%s",string);

		//Le cada uma das outras e, se
		//for diferente da primeira,
		//utilizar ingles para se comunicar
		for(j = 0; j < pessoas-1; j++){
			scanf("%s",pessoa);

			if(strcmp(string, pessoa)){
				ingles = 1;
			}
		}

		//Printa a lingua em que devem
		//se comunicar
		if(ingles){
			printf("ingles\n");
		}else{
			printf("%s\n", string);
		}

		//Zera o ingles para a proxima rodada
		ingles = 0;
	}

	return 0;
}