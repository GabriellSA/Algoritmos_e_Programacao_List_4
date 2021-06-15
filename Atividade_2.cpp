/*Elabore um algoritmo que escreva o signo do zod�aco correspondente ao dia e m�s informado.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes;
	
	do{
		printf("Digite um dia: ");
	    scanf("%d", &dia);
	    printf("Digite um m�s: ");
	    scanf("%d", &mes);
	    if(dia<1 || dia>31 or mes<1 || mes>12)
	        printf("\nDATA INFORMADA INV�LIDA!\n\n");
	} while(dia<1 || dia>31 or mes<1 || mes>12);
	
	if(mes==3 && dia>=21 && dia<=31 or mes==4 && dia>=1 && dia<=20)
	    printf("\nSeu signo � de �ries");
	else if(mes==4 && dia>=21 && dia<=30 or mes==5 && dia>=1 && dia<=20)
	    printf("\nSeu signo � de Touro");
	else if(mes==5 && dia>=21 && dia<=31 or mes==6 && dia>=1 && dia<=20)
	    printf("\nSeu signo � de G�meos");
	else if(mes==6 && dia>=21 && dia<=30 or mes==7 && dia>=1 && dia<=22)
	    printf("\nSeu signo � de C�ncer");
	else if(mes==7 && dia>=23 && dia<=31 or mes==8 && dia>=1 && dia<=22)
	    printf("\nSeu signo � de Le�o");
	else if(mes==8 && dia>=23 && dia<=31 or mes==9 && dia>=1 && dia<=22)
	    printf("\nSeu signo � de Virgem");
	else if(mes==9 && dia>=23 && dia<=30 or mes==10 && dia>=1 && dia<=22)
	    printf("\nSeu signo � de Libra");
	else if(mes==10 && dia>=23 && dia<=31 or mes==11 && dia>=1 && dia<=21)
	    printf("\nSeu signo � de Escorpi�o");
	else if(mes==11 && dia>=22 && dia<=30 or mes==12 && dia>=1 && dia<=21)
	    printf("\nSeu signo � de Sagit�rio");
	else if(mes==12 && dia>=22 && dia<=31 or mes==1 && dia>=1 && dia<=19)
	    printf("\nSeu signo � de Capric�rnio");
	else if(mes==1 && dia>=20 && dia<=31 or mes==2 && dia>=1 && dia<=18)
	    printf("\nSeu signo � de Aqu�rio");
	else if(mes==2 && dia>=19 && dia<=29 or mes==3 && dia>=1 && dia<=20)
	    printf("\nSeu signo � de Peixes");
	else printf("\nDIA INFORMADO INV�LIDO!");
	
	printf("\n\n");
	system("pause");
	return 0;
	
}
