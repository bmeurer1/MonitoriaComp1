#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int i, C;
	
	//String para guardar as mensagens
	char string[100] = {'\0'};

	scanf("%d", &C);

	for(i = 0; i < C; i++){
		
		//Le a mensagem
		scanf("%s",string);

		int j;
		
		//Percorre a string de tras pra frente,
		//se for letra minuscula, printa
		for(j = 100; j >= 0; j--){
	
			if(string[j] >= 'a' && string[j] <= 'z'){
				printf("%c", string[j]);
			}
		}

		printf("\n");
	}

	return 0;
}