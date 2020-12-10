/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 12/08/2020
Data de Modifocacao: 12/08/2020
*/
/*
1) Faça um progrma em C para cálcular a área de um terreno. Considere apenas a largura e o comprimento
*/

#include <stdio.h>
#include <locale.h>
main()
{
 	int largura, comprimento, area;
 	
 	printf("Entre com a largura: ");
 	scanf("%d", &largura);
 	fflush(stdin);
 	
 	printf("Entre com o comprimento: ");
 	scanf("%d", &comprimento);
 	
 	area = largura*comprimento;
 	
 	printf("\n\nO valor da area: %d", area);
}
