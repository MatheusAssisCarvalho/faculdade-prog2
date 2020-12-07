/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 14/09/2020
Data de Modifocacao: 14/09/2020
*/
/*
5) Faça um programa em C para calcular a área de um terreno. Considere apenas largura
e comprimento.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float areaTerreno(float largura, float comprimento) {
	float area = largura*comprimento;
	return area;
}

main()
{
 	float largura, comprimento;
 	
 	printf("Informe a largura do terreno: ");
 	scanf("%f", &largura);
 	fflush(stdin);
 	printf("Informe o comprimento do terreno: ");
 	scanf("%f", &comprimento);
 	fflush(stdin);
 	
 	printf("\n\nA area do terreno e: %.2f", areaTerreno(largura, comprimento));
}
