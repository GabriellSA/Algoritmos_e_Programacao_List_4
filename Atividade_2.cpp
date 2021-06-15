/*Elabore um algoritmo que escreva o signo do zodíaco correspondente ao dia e mês informado.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes;
	
	do{
		printf("Digite um dia: ");
	    scanf("%d", &dia);
	    printf("Digite um mês: ");
	    scanf("%d", &mes);
	    if(dia<1 || dia>31 or mes<1 || mes>12)
	        printf("\nDATA INFORMADA INVÁLIDA!\n\n");
	} while(dia<1 || dia>31 or mes<1 || mes>12);
	
	if(mes==3 && dia>=21 && dia<=31 or mes==4 && dia>=1 && dia<=20)
	    printf("\nSeu signo é de Áries");
	else if(mes==4 && dia>=21 && dia<=30 or mes==5 && dia>=1 && dia<=20)
	    printf("\nSeu signo é de Touro");
	else if(mes==5 && dia>=21 && dia<=31 or mes==6 && dia>=1 && dia<=20)
	    printf("\nSeu signo é de Gêmeos");
	else if(mes==6 && dia>=21 && dia<=30 or mes==7 && dia>=1 && dia<=22)
	    printf("\nSeu signo é de Câncer");
	else if(mes==7 && dia>=23 && dia<=31 or mes==8 && dia>=1 && dia<=22)
	    printf("\nSeu signo é de Leão");
	else if(mes==8 && dia>=23 && dia<=31 or mes==9 && dia>=1 && dia<=22)
	    printf("\nSeu signo é de Virgem");
	else if(mes==9 && dia>=23 && dia<=30 or mes==10 && dia>=1 && dia<=22)
	    printf("\nSeu signo é de Libra");
	else if(mes==10 && dia>=23 && dia<=31 or mes==11 && dia>=1 && dia<=21)
	    printf("\nSeu signo é de Escorpião");
	else if(mes==11 && dia>=22 && dia<=30 or mes==12 && dia>=1 && dia<=21)
	    printf("\nSeu signo é de Sagitário");
	else if(mes==12 && dia>=22 && dia<=31 or mes==1 && dia>=1 && dia<=19)
	    printf("\nSeu signo é de Capricórnio");
	else if(mes==1 && dia>=20 && dia<=31 or mes==2 && dia>=1 && dia<=18)
	    printf("\nSeu signo é de Aquário");
	else if(mes==2 && dia>=19 && dia<=29 or mes==3 && dia>=1 && dia<=20)
	    printf("\nSeu signo é de Peixes");
	else printf("\nDIA INFORMADO INVÁLIDO!");
	
	printf("\n\n");
	system("pause");
	return 0;
	
}
