/*Autor: Iury Fernandes
  data:  10/08/2014
  proposito: potencia com uma funçao rescursiva
*/

#include<stdio.h>
#include<stdlib.h>

int potencia(int,int);

main()
{
	int base, expoente, solucao;
	printf(" programa que calcula a potencia de um numero inteiro\n\n ");
	printf("escreva a base: ");
	scanf("%d",&base);
	printf("\n escreva o expoente maior ou igaul a 1 : ");
	scanf("%d",&expoente);
	
	solucao = potencia(base, expoente);
	
	printf("\n\n A solucao de %d elevado a %d eh: %d  ",base, expoente, solucao);
	
	
	
 return 0;	
}



int potencia(int base, int expoente)

{
	
 if(expoente == 0)
 	return 1;
 else
 	return (base * potencia(base, expoente-1));
}


    
