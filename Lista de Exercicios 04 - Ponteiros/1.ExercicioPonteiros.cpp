/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 19/11/2020
Data de Modifocacao: 19/11/2020
*/
/*
1. Fa�a um programa em C para obter a largura e comprimento de um terreno
e calcular a sua �rea em m2.
Para calcular a �rea do terreno, construa uma fun��o com passagem por
refer�ncia.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float largura = 0, comprimento = 0, area = 0;

void calcularArea(float *plargura, float *pcomprimento) {
	float *parea = &area;
	*parea = *plargura**pcomprimento;
}

main()
{
	printf("------ Bem vindo ao Calculo de area. -------\n\n");
	printf("Digite a largura: ");
	scanf("%f", &largura);
	fflush(stdin);
	printf("Digite a comprimento: ");
	scanf("%f", &comprimento);
	fflush(stdin);
	
	calcularArea(&largura, &comprimento);
	
	printf("O total da area: %.2f m2", area);
	
	printf("\n\n------ Obrigado e volte sempre -------\n\n");

}
