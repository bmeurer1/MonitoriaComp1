#include <stdio.h>

int main(int argc, char const *argv[])
{
	int validos = 0;
	float nota, media;

	//Enquanto um nao tiver lido
	//dois valores validos
	while(validos != 2){
		
		//Le a proxima nota
		scanf("%f", &nota);

		//Se nota invalida
		if(nota < 0 || nota > 10){
			printf("nota invalida\n");
		
		//Senao, coloca na media
		}else{
			media += nota;
			validos++;
		}	
	}

	printf("media = %.2f\n", media/2);

	return 0;
}