/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados por código.
Os dados utilizados para a ação obedecem à seguinte codificação:
• 1, 2, 3, 4 = voto para os respectivos candidatos;
• 5 = voto nulo;
• 6 = voto em branco.
Elabore um algoritmo que calcule e escreva:
• O total de votos para cada candidato e seu percentual sobre o total;
• O total de votos nulos e seu percentual sobre o total;
• O total de votos em branco e seu percentual sobre o total.
Como finalizador do conjunto de votos, tem-se o valor 0.*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu;
	float candidato1=0, candidato2=0, candidato3=0, candidato4=0, total=0, nulo=0, branco=0;
	float percentual1=0, percentual2=0, percentual3=0, percentual4=0, percentual5=0, percentual6=0;
	
	do{
		printf("---------- VOTAÇÃO PRESIDENCIAL ----------\n\n");
		printf("\t[1] - Candidato 1\n\t[2] - Candidato 2\n\t[3] - Candidato 3\n\t[4] - Candidato 4\n\n");
		printf("\t[5] - Voto nulo\n\t[6] - Voto em branco\n\n\t[0] - Finalizar votação\n\t[9] - Limpar dados(Nova Votação)\n\n");
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				candidato1++;
				total++;
				printf("\nVOTO CONFIRMADO!\n\n"); 
				system("pause"); system("cls"); break;
			case 2:
				candidato2++;
				total++;
				printf("\nVOTO CONFIRMADO!\n\n"); 
				system("pause"); system("cls"); break;
			case 3:
				candidato3++;
				total++;
				printf("\nVOTO CONFIRMADO!\n\n"); 
				system("pause"); system("cls"); break;
			case 4:
				candidato4++;
				total++;
				printf("\nVOTO CONFIRMADO!\n\n"); 
				system("pause"); system("cls"); break;
			case 5:
				nulo++;
				total++;
				printf("\nVOTO CONFIRMADO!\n\n"); 
				system("pause"); system("cls"); break;
			case 6:
				branco++;
				total++;
				printf("\nVOTO CONFIRMADO!\n\n"); 
				system("pause"); system("cls"); break;
			case 9:
				candidato1=0, candidato2=0, candidato3=0, candidato4=0, total=0, nulo=0, branco=0;
	            percentual1=0, percentual2=0, percentual3=0, percentual4=0, percentual5=0, percentual6=0;
	            printf("\nTODOS OS VOTOS FORAM APAGADOS\n\n");
	            system("pause"); system("cls"); break;
			case 0:
				system("cls");
				percentual1=(candidato1/total)*100;
				percentual2=(candidato2/total)*100;
				percentual3=(candidato3/total)*100;
				percentual4=(candidato4/total)*100;
				percentual5=(nulo/total)*100;
				percentual6=(branco/total)*100;
				
				printf("---------- VOTAÇÃO PRESIDENCIAL ----------\n");
				printf("---------------- RESULTADO ---------------\n\n");
				printf("Candidato 1:\nTotal de votos: %.0f\nPercentual sobre o total de votos: %.0f\n\n", candidato1, percentual1);
				printf("Candidato 2:\nTotal de votos: %.0f\nPercentual sobre o total de votos: %.0f\n\n", candidato2, percentual2);
				printf("Candidato 3:\nTotal de votos: %.0f\nPercentual sobre o total de votos: %.0f\n\n", candidato3, percentual3);
				printf("Candidato 4:\nTotal de votos: %.0f\nPercentual sobre o total de votos: %.0f\n\n\n", candidato4, percentual4);
				printf("Votos nulo:\nTotal de votos: %.0f\nPercentual sobre o total de votos: %.0f\n\n", nulo, percentual5);
				printf("Votos em branco:\nTotal de votos: %.0f\nPercentual sobre o total de votos: %.0f\n\n", branco, percentual6);
				
				system("pause"); system("cls"); break;
			default:
		        printf("\nOPÇÃO INVÁLIDA!\n\n");
				system("pause"); system("cls"); break;
		}
	}while(true);
	
	system("pause");
	return 0;
}
