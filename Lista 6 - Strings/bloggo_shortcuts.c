#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i, C, italic = 0, bold = 0;
	
	//String para guardar as mensagens
	char string[60] = {'\0'};

	while(fgets(string, 60, stdin) != NULL){

		//Percorre a string
		for(i = 0; i < 60; i++){
			if(string[i] == '_'){
				//Se o caracter for '_' e nao tiver
				//um antes, coloca <i>
				if(!italic){
					printf("<i>");
					italic = 1;
				//Caso contrario, coloca </i>
				}else{
					printf("</i>");
					italic = 0;
				}

			//O mesmo para o '*'
			}else if(string[i] == '*'){
				if(!bold){
					printf("<b>");
					bold = 1;
				}else{
					printf("</b>");
					bold = 0;
				}
			//Coloca \n no final da linha
			}else if(string[i] == '\n'){
				printf("\n");
				break;
			//Se nao for nenhum dos outros casos
			//printa o caracter da string
			}else{
				printf("%c", string[i]);
			}
		}

		//Zera string e flags para a proxima rodada
		int j;
		for(j = 0; j < 60; j++){
			string[j] = '\0';
		}		

		italic = 0;
		bold = 0;
	}

	return 0;
}