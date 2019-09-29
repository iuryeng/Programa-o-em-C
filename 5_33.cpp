#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>

int main(void)
{
      
    int aleatorio,a,b, resultado,certo=0;
	
	srand(time(NULL));  
	
    printf("Programa que te ajuda a aprender a multiplicar.\n");  
	printf("quantas vezes quer testar seus conhecimentos?\n\n");
	
	a=rand() % 10;
	b=rand() % 10;	 
	   
	printf("qaunto eh %d * %d  ?: ", a, b );
	scanf("%d",&resultado);
	
	if(resultado == a*b)
		certo =1;
	else
		certo =0;
	
	
	 aleatorio = rand()%4;
	
	if (certo == 1)
	{
	
		switch (aleatorio){
		
	
		
			case 1:
				printf("Muito Bem !");	
				break;
				
			case 2:
				printf("Excelente! ");	
				break;
			
			case 3:
				printf("Bom Trabalho!");	
				break;
				
			case 4:
				printf("Certo continue Assim");	
				break;
			
			
	}

      
 }
 	else 
	 {
	 	   
		switch (aleatorio){
		
	
		
			case 1:
				printf("Não. Tente novamente, por favor!");	
				break;
				
			case 2:
				printf("Errado. Tente mais uma vez. ");	
				break;
			
			case 3:
				printf("Não desista. ");	
				break;
				
			case 4:
				printf("Não. Continue tentando.");	
				break;
 		
 		}
 		
 		
 	}
     return 0;
}
