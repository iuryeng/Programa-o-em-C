/*Autor: Iury Fernandes
  data: 10/08/2014
  proposito: calculo de medio de numeres escritos com funcao sentinela 
*/

#include<stdio.h>
#include<stdlib.h>

int sentinela (int);
main()
{
	float num=0, y, soma, vez,  cont=0, resultado, media = 0;
	
	

	
	while(sentinela(y) !=  1)
	{


	
	printf("digite numeros: ");
	scanf("%f",&y);
	
	sentinela (y);
	
	vez =  cont++;
	
	soma+=y;
	resultado = soma - 9999;
	
	
	
	}
		
	media = resultado/vez ;
	printf("\n\nA media eh %f", media);
	
}

	int sentinela (int y)
	{
		
		if (y == 9999)
			return 1;
		else 
			return 0;	
		
	}

