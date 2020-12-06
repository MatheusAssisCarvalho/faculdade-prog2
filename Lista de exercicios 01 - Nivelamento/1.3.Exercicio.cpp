/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
3) Faça um programa em C para obter o código e o preço de um produto. Ao final, o programa deverá exibir o novo preço do produto com desconto de 25%.
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
main()
{
 	float preco;
 	int codigo;
 	
 	printf("Entre com o codigo do produto: ");
 	scanf("%d", &codigo);
	fflush(stdin);
	
	printf("Entre com o preco do produto: ");
 	scanf("%f", &preco);
	fflush(stdin);
	
 	printf("O preco do produto (%d) com desconto de 25 porcento: R$ %.2f", codigo, preco*0.75);
}
