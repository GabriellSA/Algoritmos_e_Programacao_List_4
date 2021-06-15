/*Anacleto tem 1,50 metro e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10 metro
e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão
necessários para que Felisberto seja maior que Anacleto.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int anacleto=150, felisberto=110, ano=0;
	
	while(felisberto<=anacleto){
		anacleto=anacleto+2;
		felisberto=felisberto+3;
		ano++;
	}	
	printf("\nSerão necessários %d anos para que Felisberto seja maior que Anacleto\n\n", ano);
	
	system("pause");
	return 0;
}
