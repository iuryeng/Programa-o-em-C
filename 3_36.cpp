/*Autor: Iury Fernandes
  data: 10/08/2014
  proposito: funçao binario para decimal
*/

#include<stdio.h>
#include<stdlib.h>

int binario_para_decimal(int binario);

main()
{
	
	int decimal = 0;
    int binario = 0;

    printf("Entre com um inteiro (0's e 1's): ");
    scanf("%d", &binario);

    decimal = binario_para_decimal(binario);

    printf("Binario = %d ->",binario); 
	printf(" Decimal = %d\n",decimal);

    return 0;
}

int binario_para_decimal(int binario)
{
    int total  = 0;
    int pot = 1;

    while(binario > 0) 
	{
        total += binario % 10 * pot;
        binario    = binario / 10;
        pot = pot * 2;
     
    }

    return total;
}

