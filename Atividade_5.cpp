/*Escreva um algoritmo que imprima todas as possibilidades de que o lançamento de dois dados
tenhamos o valor 7 como resultado da soma dos valores de cada dado.*/



#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, soma, resultado; 
	
	for(i=0; i<100; i++){
		for(j=0; j<100; j++){
			soma=i+j;
			if(soma==7){
				resultado++;
			}
		}	
	}
	
	printf("Existem %d possibilidades de o resultado ser igual a 7\n\n", resultado);
	
	system("pause");
	return 0;
}
