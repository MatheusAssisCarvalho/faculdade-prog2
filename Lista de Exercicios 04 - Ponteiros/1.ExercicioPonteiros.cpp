/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 19/11/2020
Data de Modifocacao: 19/11/2020
*/
/*
1. Faça um programa em C para obter a largura e comprimento de um terreno
e calcular a sua área em m2.
Para calcular a área do terreno, construa uma função com passagem por
referência.
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
