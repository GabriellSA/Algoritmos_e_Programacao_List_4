/*Elabore um algoritmo que imprima todos os números primos existentes entre N1 e N2, em que
N1 e N2 são números naturais fornecidos pelo usuário.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, primo;
	int contador, i, j;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &numero1);
	printf("Digite o segundo número: ");
	scanf("%d", &numero2);
	printf("\n\nOs números primos existentes entre %d e %d são: \n\n", numero1, numero2);
	
	if(numero1>numero2){
		contador=numero1-numero2;
	    for(i=0; i<contador; i++){
	    	primo=0;
	    	numero2=numero2+1;
	    	for(j=2; j <= numero2/2; j++){
	    		if(numero2 % j == 0){
	    			primo++;
				}	
			}
		if(primo==0)
		    printf("\n%d\n", numero2);
		}
	}
	else{
		contador=numero2-numero1;
	    for(i=0; i<contador; i++){
	    	primo=0;
	    	numero1=numero1+1;
	    	for(j=2; j <= numero1/2; j++){
	    		if(numero1 % j == 0){
	    			primo++;
				}	
			}
		if(primo==0)
		    printf("\n%d\n", numero1);
		}	
	}
	printf("\n\n");
	system("pause");
	return 0;
	
	
}

