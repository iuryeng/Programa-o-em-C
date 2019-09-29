/*Autor: Iury Fernandes
  data: 10/08/2014
  proposito: funçao contadigito
*/


#include <stdio.h>
	
int conta_digito(int, int);

    
    int main(void)
    
    {
    	
        int  valor,ultimo;
        
        
        
        scanf("%d", &valor);
        ultimo = valor%10;
        conta_digito(valor,ultimo);
       
        return 0;
   }
   int conta_digito (int valor, int ultimo)
   
   {
   
   int contaDigitos, vezes_sete = 0; 
   
        if (valor == 0) 
	   		contaDigitos = 1;
		else
		
		    while (valor != 0)
		   {
		       contaDigitos = contaDigitos + 1;
		       valor = valor / 10;
		    
		        if( valor%10 == 7 && ultimo != 7)
		    	    vezes_sete ++;
		        else if ( valor%10 == 7)
		    		vezes_sete ++;
		    		
		    	     
		   }
		   
	 	if(ultimo == 7)
	 		vezes_sete ++;
	 	
	           
     printf ("\n O numero de digitos eh: %d", contaDigitos); 
     printf ("\n O numero de setes eh: %d ", vezes_sete);
	 
	 return 0;   
           
 }

           
           
           

