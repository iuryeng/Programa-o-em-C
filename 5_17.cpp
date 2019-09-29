#include<stdio.h>
#include<stdlib.h>

int eh_multiplo(int,int);

main()
{
	
	int n1,n2;
	printf("escreva o numero1: ");
	scanf("%d",&n1);
	printf("escreva o numero2: ");
	scanf("%d",&n2);

	if ( eh_multiplo(n1,n2) == 0)
		printf("nao eh multiplo");
	else
		printf("eh multiplo");
		
		
	return 0;
	
}

int eh_multiplo(int a,int b){
	
	if (a%b == 0)
		return 1;
	
	else
	
	
	return 0;
			
}
