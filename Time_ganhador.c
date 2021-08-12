#include <stdio.h>

int main(){
	
	int gol1, gol2;
	char time1[20], time2[20];
	
	printf("Digite o nome da primeira equipe: ");
	gets(time1);
	fseek(stdin,0,SEEK_END);
	printf("------------------\n");
	printf("------------------\n");
	printf("Digite o nome da segunda equipe: ");
	gets(time2);
	
	printf("------------------\n");
	printf("------------------\n");;
	printf("Quantidade de gols da equipe %s\n:", time1);
	scanf("%d",&gol1);
	printf("Quantidade de gols da equipe %s\n:", time2);
	scanf("%d",&gol2);
	
	while(gol1 < 0  || gol2 < 0){
		printf("------------------\n");
		printf("------------------\n");
		printf("Digite numeros validos de gols \n");
		printf("------------------\n");
		printf("------------------\n");
		printf("Quantidade de gols da equipe %s\n:", time1);
		scanf("%d",&gol1);
		printf("Quantidade de gols da equipe %s\n:", time2);
		scanf("%d",&gol2);
	}
	if(gol1>gol2){
		printf("------------------\n");
		printf("------------------\n");
		printf("A equipe %s ganhou por %d a %d da equipe %s", time1, gol1, gol2, time2);
	}
	else{
		printf("------------------\n");
		printf("------------------\n");
		printf("A equipe %s ganhou por %d a %d da equipe %s", time2, gol2, gol1, time1);
	}
	
	return 0;
}
