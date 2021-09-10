/* Questão 02 
Elabore um programa que tenha uma função que retorne o reverso de um número inteiro. Por exemplo, 742-> 247.*/

#include<stdio.h>
#include<stdlib.h>

//funçao para transformar a ordem inversa
int calcifra ( int numero)
	{
		int cifra;
		
	//	if(numero >= 0)
	//	{
			do
			{
				cifra = numero % 10 ;
				printf("%d", &cifra);
				numero /= 10;
			}
			while( numero != 0);
			{
				printf("\n");
			}
		}
		else
				if( numero < 1)
			{
					numero = numero * -1;
					printf("-");
				do
					{
						cifra = numero % 10 ;
						printf("%d", &cifra);
						numero /= 10;
					}
				while( numero != 0);
					{
						printf("\n");
					}
			}
	return numero;
	}

//Principal
main()

{
	int numero, resultado, cifra;
	
	printf("\nDigite uma ordem numerica inteiro = ");
	scanf("%d", &numero);
	
	resultado = calcifra(numero);
	
	printf("\n\nA SEGUECIA INVERSA É =\t %d\n", resultado); 
}

