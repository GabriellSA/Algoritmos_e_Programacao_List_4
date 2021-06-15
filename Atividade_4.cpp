/*Construa um algoritmo que apresente os 20 primeiros termos da série de Fibonacci.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tn[20], i;
	
	for(i=0; i<20; i++){
		tn[i]= (pow(((1+sqrt(5))/2),i+1) - pow(((1-sqrt(5))/2),i+1))/sqrt(5);
	}
	printf("- 20 PRIMEIROS TERMOS DA SÉRIE DE FIBONACCI -\n");
	
	for(i=0; i<20; i++){
		printf("\n%d\n", tn[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}  
