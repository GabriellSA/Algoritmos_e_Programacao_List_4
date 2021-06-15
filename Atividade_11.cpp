/*Construa um algoritmo que calcule a média aritmética de um conjunto de números pares que
forem fornecidos pelo usuário. O valor de finalização será a entrada do número 0. Observe que
nada impede que o usuário forneça quantos números ímpares quiser, com a ressalva de que eles
não poderão ser acumulados.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, par=0, media=0, total=0;
	
	do{
		printf("Digite um número par: ");
		scanf("%d", &numero);
		if( numero%2 == 0){
			total++;
			par=par+numero;
		}
	}while(numero!=0);
	
	total=total-1;
	media=par/total;
	printf("\nA média aritmética dos números pares é: %d\n\n", media);
	
	system("pause");
	return 0;	
}
