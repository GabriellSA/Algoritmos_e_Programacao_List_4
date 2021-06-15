/*Construa um algoritmo que calcule a m�dia aritm�tica de um conjunto de n�meros pares que
forem fornecidos pelo usu�rio. O valor de finaliza��o ser� a entrada do n�mero 0. Observe que
nada impede que o usu�rio forne�a quantos n�meros �mpares quiser, com a ressalva de que eles
n�o poder�o ser acumulados.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, par=0, media=0, total=0;
	
	do{
		printf("Digite um n�mero par: ");
		scanf("%d", &numero);
		if( numero%2 == 0){
			total++;
			par=par+numero;
		}
	}while(numero!=0);
	
	total=total-1;
	media=par/total;
	printf("\nA m�dia aritm�tica dos n�meros pares �: %d\n\n", media);
	
	system("pause");
	return 0;	
}
