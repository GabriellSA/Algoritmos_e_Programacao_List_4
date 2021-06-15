/*Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (�M� para
masculino e �F� para feminino) de 50 pessoas e, depois, calcule e escreva:
A maior e a menor altura do grupo;
A m�dia de altura das mulheres;*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float altura, maior=0, menor=0, mulheres=0, alturaMulheres, media=0;
	char sexo;
	
	for(i=1; i<=5; i++){
		do{
			printf("\nDigite a altura da %d� pessoa (Cent�metros): ", i);
			fflush(stdin);
			scanf("%f", &altura);
			printf("Digite seu sexo (F ou M): ");
			fflush(stdin);
			scanf("%c", &sexo);
			sexo=toupper(sexo);
			if(sexo!='F' && sexo!='M')
			    printf("\nSEXO INFORMADO INV�LIDO!\n");
		} while(sexo!='F' && sexo!='M');
		
		if(altura>maior)
		    maior=altura;
		if(menor==0 || altura<menor)
		    menor=altura;
		if(sexo=='F'){
			mulheres++;
			alturaMulheres=alturaMulheres+altura;
		}
	}
	media=alturaMulheres/mulheres;
	system("cls");
	printf("\nA maior altura �: %.2f cent�metros", maior);
	printf("\nA menor altura �: %.2f cent�metros", menor);
	printf("\nA m�dia de altura entre as mulheres � de: %.2f cent�metros\n\n", media);
	
	system("pause");
	return 0;
}

