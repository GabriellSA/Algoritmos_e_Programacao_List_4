/*Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma
adega, tendo como dados de entrada tipos de vinho, sendo: ‘T’ para tinto, ‘B’ para branco e ‘R’ 
para rosê. Especifique a porcentagem de cada tipo sobre o total geral de vinhos; a quantidade de
vinhos é desconhecida, utilize como finalizador ‘F’ de fim.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char menu;
	float tinto=0, branco=0, rose=0;
	float total=0, totalTinto=0, totalBranco=0, totalRose=0;
	
	do{
		printf("---------- LEVANTAMENTO DO ESTOQUE DE VINHOS ----------\n\n");
		printf("T - Tinto\nB - Branco\nR - Rosê\n\nF - Fim do levantamento\nL - Limpar todos os dados salvos (Nova pesquisa)\n");
	    scanf("%c", &menu);
	    menu = toupper(menu);
	    system("cls");
	
	switch(menu){
		case 'T':
			printf("Digite a quantidade de vinhos Tinto no estoque: ");
			scanf("%f", &tinto);
			total=total+tinto;
			system("cls");
			break;
		case 'B':
			printf("Digite a quantidade de vinhos Branco no estoque: ");
			scanf("%f", &branco);
			total=total+branco;
			system("cls");
			break;
		case 'R':
			printf("Digite a quantidade de vinhos Rosê no estoque: ");
			scanf("%f", &rose);
			total=total+rose;
			system("cls");
			break;
		case 'F':
			totalTinto=(tinto/total)*100;
			totalBranco=(branco/total)*100;
			totalRose=(rose/total)*100;
			printf("---------- LEVANTAMENTO DO ESTOQUE DE VINHOS ----------\n\n");
			printf("\n%.2f por cento do estoque é de vinho Tinto\n", totalTinto);
			printf("%.2f por cento do estoque é de vinho Branco\n", totalBranco);
			printf("%.2f por cento do estoque é de vinho Rosê\n\n", totalRose);
			system("pause");
			break;
		case 'L':
			tinto=0, branco=0, rose=0;
			total=0, totalTinto=0, totalBranco=0, totalRose=0;
		default: 
		   printf("\nOPÇÃO INVÁLIDA!\n");
		   system("cls");
	}
	}while(true);
	
	system("pause");
	return 0;
}
