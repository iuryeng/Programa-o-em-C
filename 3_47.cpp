/*Autor: Iury Fernandes
  data: 10/08/2014
  proposito: funçao fatorial
*/

#include<stdio.h>
#include<stdlib.h>

int fatorial (int);

main()
{
	
	int x;
	printf("digite um numero inteiro nao negativo: ");
	scanf("%d", &x);
	printf("o fatorial eh:%d",fatorial(x));
	
}

int fatorial (int numero)
{
	int fator ,fat ;
		fat = 1;
	for (fator =1; fator <= numero ; fator++)
		fat*= fator;
		
	return fat;
		
}
