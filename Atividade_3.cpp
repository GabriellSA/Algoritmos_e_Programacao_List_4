/*Construa um algoritmo que seja capaz de dar a classificação olímpica de 3 países informados.
Para cada país é informado o nome, a quantidade de medalhas de ouro, prata e bronze. Considere
que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze, peso 1.*/



#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char paises[3][50];
	int i;
	float ouro, prata, bronze, total, final[3];
	
	for(i=0; i<3; i++){
		do{
			printf("Digite o nome do %dº país: ", i+1);
		    fgets(paises[i], 50, stdin);
		    fflush(stdin);
		    if(strlen(paises[i])<3)
		        printf("\nPAÍS INVÁLIDO!\n\n");
		}while(strlen(paises[i])<3);
	}
	system("cls");
	
	for(i=0; i<3; i++){
		ouro=0;
		prata=0;
		bronze=0;
		total=0;
		printf("Informe a quantidade de medalhas de ouro do %s", paises[i]);
		scanf("%f", &ouro);
		printf("Informe a quantidade de medalhas de prata do %s", paises[i]);
		scanf("%f", &prata);
		printf("Informe a quantidade de medalhas de bronze do %s", paises[i]);
		scanf("%f", &bronze);
		
		total=ouro+prata+bronze;
		final[i]=(ouro*3+prata*2+bronze)/6;
		fflush(stdin);
		system("cls");	
	}
	
	printf("- CLASSIFICAÇÃO OLÍMPICA -\n\n");
	
	for(i=0; i<3; i++){
		printf("\n%s%.2f\n", paises[i], final[i]);		
	}
	printf("\n\n");
	
	system("pause");
	return 0;
		
}
