/*Autor: Iury Fernandes
  data: 10/08/2014
  proposito: Funçao Salario de empregados de uma empresa
*/

#include<stdio.h>
#include<stdlib.h>

float salario_gerente(float);
float salario_comum(float, float);
float salario_por_comissao(float, float);
float salario_empreitada(int, float);
main()
{


	int codigo, quantia;
	float    cont=0,salGer=0, salComum=0, vendas=0, salEmpreitada=0, horas=0, preco=0, porcentagem= 0;
	
	printf("Programa que auxilia no pagamento de empregados de uma empresa\n\n");
	
	printf("***Codigo dos empregados***\n");
	printf("1 -> Gerentes\n");
	printf("2 -> Trabalhadores Comuns\n");
	printf("3 -> Trabalhadores por Comissao\n");
	printf("4 -> Trabalhadores por Empreitada\n\n");
	
	printf("****Fatores de Correcao****");
	printf("\n1 -> Salário fixo");
	printf("\n2 -> Salário fixo por 40 hrs e 1,5 * salario por hr por hr extra");
	printf("\n3 -> 250,00 + 5,7 por cento de suas vendas brutas");
	printf("\n4 -> qunatia fixa por item , para cada item produzido\n\n");
	

	
	for(cont = 1; cont<=4; cont++)
	{
		printf("\nDigite o codgo do empregado ");
		scanf("%i",&codigo);
	
	
		switch (codigo)
		{
			case 1:
				printf("\nForneca o Salário do Gerente:  ");
				scanf("%f",&salGer);	
				 salario_gerente(salGer);
				
				
				break;
				
			case 2:
				printf("\nForneca o salario fixo por hr do Trabalhandor comun: ");
				scanf("%f",&salComum);
				printf("\n Quantas hr o trabalhador comum trabalhou ?");
				scanf("%f",&horas);
				
			     salario_comum(salComum, horas);
				break;
			
			case 3:
				printf("\n Informe o valor das vendas Brutas do Trabalhador por Comissao: ");
				scanf("%f",&vendas);
				porcentagem = (0.057 * vendas);
				salario_por_comissao(vendas,porcentagem);
			
				
				break;
					
			case 4:
				printf("\nDigite a quantia de itens que o Trabalhador por Empreitada produzio: ");
				scanf("%d",&quantia);
				printf("\nDigite o preco do item: ");
				scanf("%f",&preco);
			    salario_empreitada(quantia, preco);
			
				
				break;	
		}
	
	}
	
	printf("O montante pago ao Gerente eh: %f\n", salario_gerente(salGer));
	printf("O montante pago ao Trabalhador Comum eh: %f\n", salario_comum(salComum, horas));
	printf("O montante pago ao Trabalhador por Comissao eh: %f\n", salario_por_comissao(vendas,porcentagem));
	printf("O montante pago ao Trabalhador por Empreitada eh: %f \n", salario_empreitada(quantia, preco));
	
	return 0;
}

float salario_gerente(float salGer)
{

	return salGer;
}

float salario_comum(float salComum, float horas)
{

	float salarioComum=0;
	
	if(horas <= 40)
		salarioComum = salComum;
	else 
		salarioComum = salComum + (0.15*salComum);
		
	return salarioComum;
}

float salario_por_comissao(float vendas, float porcentagem)
{
	
	float salComissao=0;

	salComissao =  porcentagem + 250;
	return salComissao;
	
	
}

float salario_empreitada(int quantia, float preco)
{
	float salEmpreitada;
	salEmpreitada = quantia * preco;
	
	return salEmpreitada;
	
}
				

