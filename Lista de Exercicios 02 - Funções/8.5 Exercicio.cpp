/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
8.5) Faça um programa em C para preencher uma matriz de 3x4. Cada posição
armazenará o peso em kilograma (kg) de um determinado produto. Os
referidos pesos serão digitados pelo usuário. Ao final, o programa
deverá exibir o conteúdo da matriz de 2 formas:
a) Os pesos armazenados na matriz exatamente como digitados.
b) Os pesos armazenados na matriz convertidos em libra (lb) com 3 casas
decimais.
Para converter de kg para lb basta dividir o valor em kg por 0,454.
Ex.: 1kg / 0,454 = 2,202 libras.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float kg[3][4], lb[3][4]; 

void converterLb (float kg[3][4] = {}) 
{
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			lb[i][k] = kg[i][k]/0.454;
		}
	}
}
int imprimirMatrizKg (float matriz[3][4] = {}) 
{
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			printf("%.0f\t", matriz[i][k]);
		}
		printf("\n");
	}
	printf("\n");
}
int imprimirMatrizLb (float matriz[3][4] = {}) 
{
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			printf("%.3f\t", matriz[i][k]);
		}
		printf("\n");
	}
	printf("\n");
}

main()
{	
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			printf("kg [%d][%d]: ", i, k);
			scanf("%f", &kg[i][k]);
			fflush(stdin);
		}
	}
	converterLb(kg);
	imprimirMatrizKg(kg);
	imprimirMatrizLb(lb);
}
