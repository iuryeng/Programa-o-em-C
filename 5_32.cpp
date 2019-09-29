#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
int main(void)
{
      
    int vezes, cont;
	  
    printf("Programa que te ajuda a aprender a multiplicar.\n");  
	printf("quantas vezes quer testar seus conhecimentos?\n\n");
	scanf("%i",&vezes);  
	
	for(cont =1; cont<=vezes; cont++)     
		printf("qaunto eh %d * %d  ?\n", rand() % 10, rand() % 10 );

      
     
     return 0;
}
