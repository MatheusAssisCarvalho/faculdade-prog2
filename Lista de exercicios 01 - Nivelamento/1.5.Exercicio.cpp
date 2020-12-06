/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
5) Faça um programa em C para calcular a área de um terreno. Considere apenas largura e comprimento.
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
main()
{
 	float largura, altura;
 	
 	printf("Entre com a largura: ");
 	scanf("%f", &largura);
	fflush(stdin);
	
	printf("Entre com a altura: ");
 	scanf("%f", &altura);
	fflush(stdin);
	
 	printf("A area do terreno e : %.2f m2", (altura*largura));
}
