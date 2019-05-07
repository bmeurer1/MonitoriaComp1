#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i, paren_cont = 0, failed = 0;
	
	//String para guardar as expressoes
	char string[1000];

	//Enquanto não acabarem os casos de teste
	while(scanf("%s", string) != EOF){
		
		int j;
		
		//Para cada um dos caracteres da expressao
		for(j = 0; j < 1000; j++){

			//Checa se abre ou fecha parentesis
			if(string[j] == '('){
				paren_cont++;
			}else if(string[j] == ')'){
				paren_cont--;
			}

			//Se tiver fechado um parentesis
			//antes de abrir outro, incorreto
			if(paren_cont < 0){
				printf("incorrect\n");
				failed = 1;
				break;
			}
		}

		//Se não tiver fechado um parentesis
		//antes de abrir outro, checa se
		//quantidade de abertos e fechados
		//eh igual
		if(!failed){
			if(paren_cont == 0){
				printf("correct\n");
			}else{
				printf("incorrect\n");
			}
		}

		//Zera os valores para a próxima expressão
		paren_cont = 0;
		failed = 0;
		for(i = 0; i < 1000; i++){
			string[i] = '\0';
		}
	}

	return 0;
}