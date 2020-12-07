/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 14/09/2020
Data de Modifocacao: 14/09/2020
*/
/*
3) Faça um programa em C para obter o código e o preço de um produto. Ao final, o
programa deverá exibir o novo preço do produto com desconto de 25%.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float desconto(float produto) {
	produto = produto*0.75;
	return produto;
}


main()
{
 	float produto;
 	int codigo;
 	
 	printf("Informe o codigo do produto: ");
 	scanf("%d", &produto);
 	fflush(stdin);
 	printf("Informe o preco do produto: ");
 	scanf("%f", &produto);
 	fflush(stdin);
 	
 	printf("\n\nO produto com desconto: %.2f", desconto(produto));
}
