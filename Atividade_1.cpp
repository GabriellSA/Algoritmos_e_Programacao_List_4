/*Elabore um algoritmo que, a partir de um dia, mês e ano fornecidos, valide se eles compõem
uma data válida. Não deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano
bissexto.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes, ano;
	
	printf("Digite um dia: ");
	scanf("%d", &dia);
	printf("Digite um mês: ");
	scanf("%d", &mes);
	printf("Digite um ano: ");
	scanf("%d", &ano);
	
	switch(mes){
		case 1:
		case 3:
		case 5:
		case 7 ... 8:
		case 10:
		case 12:
			if(dia>=1 && dia<=31)
				printf("\nEssa é uma data válida!\n\n");
			else printf("\nEssa não é uma data válida!\n\n");
			break;
		
		case 2:
			if(dia>=1 && dia<=29)
			    printf("\nEssa é uma data válida!\n\n");
			else printf("\nEssa não é uma data válida!\n\n");
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			if(dia>=1 && dia<=30)
			    printf("\nEssa é uma data válida!\n\n");
			else printf("Essa não é uma data válida!\n\n");
			break;
			
		default: printf("\nEssa não é uma data válida!\n\n");
		    break;
	}
	system("pause");
	return 0;
}
