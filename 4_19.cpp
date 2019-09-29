/*Autor: Iury Fernandes
  data: 10/08/2014
  proposito: Ajuda no cadastro de produtos
*/

#include<stdio.h>
#include<stdlib.h>


int func_cadastro(int, int, int, int, int);


main()
{
	int  processo, numero, quant1, quant2, quant3, quant4, quant5, num1, num2, num3, num4, num5;

	printf("          PROGRAMA DE CONTROLE DE VENDAS\n\n");
	
	printf("Escolha o qual processo quer executar:\n");
	printf("1 -> para  Encerrar\n");
	printf("2 -> para  Cadastrar\n");
	printf("proesso: ");
	
	
	scanf("%d",&processo);
	
	if (processo == 2);
	{
	
		system ("cls");	
	    printf("\n\nPrograma Encerredo\n\n");
	    
    }
    
    if (processo ==2)
	{
		system ("cls");
		printf("1) CADASTRAMENTO");
		printf("\n\nCadastre cinco produtos\n\n");
		
	
		
		printf("digite a quantidade do produto 1 no dia: ");
		scanf("%d",&quant1);
		printf("digite o numero do 1 produto: ");
		scanf("%d",&num1);
		
		printf("digite a quantidade do produto 2 no dia : ");
		scanf("%d",&quant2);
		printf("digite o numero do 2 produto: ");
		scanf("%d",&num2);
		
		
		printf("digite a quantidade do produto no 3 no dia : ");
		scanf("%d",&quant3);
		printf("digite o numero do 3 produto: ");
		scanf("%d",&num3);
		
		
		
		printf("digite a quantidade do produto no 4 no dia : ");
		scanf("%d",&quant4);
		printf("digite o numero do 4 produto: ");
		scanf("%d",&num4);
		
		
		
		printf("digite a quantidade do produto no 5 no dia: ");
		scanf("%d",&quant5);
		printf("digite o numero do 5 produto: ");
		scanf("%d",&num5);
		;
		
		system ("cls");
		
		printf("                ******************\n");
		printf("                TABELA DE PRODUTOS\n");
		printf("                ******************\n\n");
		printf("Ordem       ");
		printf("    Identificacao do produto\n\n");
		printf("1                %d\n", num1);
		printf("2                %d\n", num2);
		printf("3                %d\n", num3);
		printf("4                %d\n", num4);
		printf("5                %d\n\n", num5);
		
		
		printf("                ***********************\n");
		printf("                DETERMINACAO DE PRECOS\n");
		printf("                ***********************\n\n");
	
			
		func_cadastro(num1,num2,num3,num4,num5);
		

		
	
			
   }
   	   
      
	
	 return 0;				
		}
		
	
	



int	func_cadastro(int num1, int num2, int num3, int num4, int num5)
{
	
	int preco1, preco2, preco3, preco4, preco5, total, cont=0, numero;
	
	
		
		for(cont =1; cont<=5; cont++)
		{     
				
				printf("digite a ordem do produto para determinar o preco: ");
				scanf("%d",&numero);
			
				
				switch(numero)
				
				{
				
		
				
				
				case 1:
					printf("digite o preco de varejo do produto %d :", num1);
					scanf("%d",&preco1);
					break;
				case 2:
					printf("digite o preco de varejo do produto %d :", num2);
					scanf("%d",&preco2);
					break;
				case 3:
					printf("digite o preco de varejo do produto %d :", num3);
					scanf("%d",&preco3);
					break;
				case 4:
					printf("digite o preco de varejo do produto %d :", num4);
					scanf("%d",&preco4);
					break;
				case 5:
					printf("digite o preco de varejo do produto %d :", num5);
					scanf("%d",&preco5);
					break;
					
		     	}
		     	
		}
	 
	 total=preco1+preco2+preco3+preco4+preco5;
	
	 printf("\n\nO VALOR TOTAL DOS PRODUTOS CADASTRADOS E EM REAIS E:  %d",total);
	
	
   }
			
			





