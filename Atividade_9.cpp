/*Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve
fazer chutes até acertar o número imaginado. Como dica, a cada tentativa é dito se o chute foi alto
ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o número imaginado e os
chutes, ao final mostre quantas tentativas foram necessárias para descobrir o número.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, chute, tentativas;
	
	printf("Digite o número imaginado: ");
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
	printf("- PARABÉNS, VOCÊ ACERTOU -\nForam necessárias %d tentativas\n\n", tentativas);
	
	system("pause");
	return 0;
}
