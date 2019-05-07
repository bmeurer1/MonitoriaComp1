#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i, nr_allit = 0, allit = 0;
	char curr_char;
	
	//String para guardar as frases
	char string[6000];

	//Enquanto não acabarem os casos de teste
	while(fgets(&string[0], 6000, stdin) != NULL){


		//Converte todas as letras para minusculo
		//para facilitar as comparacoes
		for(i = 0; i < 6000; i ++){
			if(string[i] >= 'A' && string[i] <= 'Z'){
				string[i] = string[i] + 32;
			}
		}
		
		int j;
		//Inicia com o primeiro caracter da frase
		curr_char = string[0];
		
		//Para cada um dos caracteres da frase
		for(j = 1; j < 6000; j++){

			//Se for o fim da frase, termina
			if(string[j] == '\0'){
				break;
			}

			//Se for o inicio de outra palavra,
			//ve se a letra eh a mesma da anterior
			if(string[j-1] == ' '){
				//Se for, temos uma aliteracao
				if(string[j] == curr_char){
					allit = 1;
				//Senao, nossa aliteracao acabou. O novo
				//caracter a ser checado eh o do inicio 
				//da palavra atual
				}else{
					nr_allit += allit;
					curr_char = string[j];
					allit = 0;
				}
			}
		}

		//Soma aliteracoes que falta, printa resultado
		//e zera valores pra proxima frase
		nr_allit += allit;
		printf("%d\n", nr_allit);

		nr_allit = 0;
		allit = 0;
	}

	return 0;
}