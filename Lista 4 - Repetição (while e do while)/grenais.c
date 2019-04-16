#include <stdio.h>

int main(int argc, char const *argv[])
{
	int grenais = 0, inter = 0, gremio = 0, empates = 0, novo = 0;
	int gols_inter, gols_gremio;

	//Enquanto novo grenal nao for 2
	while(novo != 2){
		
		grenais++;

		//Le os gols do proximo jogo
		scanf("%d %d", &gols_inter, &gols_gremio);

		//Se inter ganhou
		if(gols_inter > gols_gremio){
			inter++;
		
		//Se gremio ganhou
		}else if(gols_gremio > gols_inter){
			gremio++;
		
		//Empate
		}else{
			empates++;
		}

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &novo);
	}

	printf("%d grenais\n", grenais);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", empates);

	if(inter > gremio){
		printf("Inter venceu mais\n");
	}else if(gremio > inter){
		printf("Gremio venceu mais\n");
	}else{
		printf("Nao houve vencedor\n");
	}

	return 0;
}