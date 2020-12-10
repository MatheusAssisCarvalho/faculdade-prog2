/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 18/08/2020
Data de Modifocacao: 18/08/2020
*/
/*
4) Faça um programa em C para obter o nome e preco dos 150 itens da cantina Bom Sabor. Ao final, o programa deve exibir o produto mais caro, 
valor total e media de preco.
*/
#include <string.h>
#include <stdio.h>
#include <locale.h>
main()
{
 	float preco, produtoMaisCaro, valorTotal = 0, mediaPreco = 0;
 	char nome[50], nomeProdutoCaro[50];
 	int i, cont = 0;
 	
 	printf("Bem vindo a Cantinha Bom Sabor!\n\n");
 	printf("Informe o nome do produto: ");
	gets(nome);
 	fflush(stdin);
	printf("Informe o valor do produto: ");
	scanf("%f", &preco);
 	fflush(stdin);
	valorTotal += preco;
	mediaPreco = preco;
 	cont += 1;
	
	if (produtoMaisCaro < preco){
		produtoMaisCaro = preco;
		strcpy(nomeProdutoCaro, nome);
	}
 	for (i = 0; i < 149; i++) {
 		printf("Informe o nome do produto: ");
 		gets(nome);
 		fflush(stdin);
 		printf("Informe o valor do produto: ");
 		scanf("%f", &preco);
 		fflush(stdin);
 		valorTotal += preco;
 		cont += 1;
 		
 		if (produtoMaisCaro < preco){
 			produtoMaisCaro = preco;
			strcpy(nomeProdutoCaro, nome);
		}
	}
	
	printf("\nO nome produto mais caro e: %s", nomeProdutoCaro);
	printf("\nO valor total: %f", valorTotal);
	printf("\nA media de precos e: %f", valorTotal/cont);
	
}
