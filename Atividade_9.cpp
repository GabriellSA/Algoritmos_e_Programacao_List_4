/*Imagine uma brincadeira entre dois colegas, na qual um pensa um n�mero e o outro deve
fazer chutes at� acertar o n�mero imaginado. Como dica, a cada tentativa � dito se o chute foi alto
ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o n�mero imaginado e os
chutes, ao final mostre quantas tentativas foram necess�rias para descobrir o n�mero.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, chute, tentativas;
	
	printf("Digite o n�mero imaginado: ");
	scanf("%d", &numero);
	system("cls");
	
	do{
		printf("\nDigite seu chute: ");
		scanf("%d", &chute);
		if(chute>numero)
		   printf("\nSeu chute foi alto!\n");
		else printf("\nSeu chute foi baixo!\n");
		tentativas++;
	} while(numero!=chute);
	
	system("cls");
	printf("- PARAB�NS, VOC� ACERTOU -\nForam necess�rias %d tentativas\n\n", tentativas);
	
	system("pause");
	return 0;
}
