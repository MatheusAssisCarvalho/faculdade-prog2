/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 16/09/2020
Data de Modifocacao: 16/09/2020
*/
/*
8.7) 2- Faça um programa em C para obter a matrícula e o salário dos
funcionários da empresa Master Chef. Ao final, o programa deverá exibir
o total dos salários obtidos em reais (R$) e em dólar (U$).
Obs1: O programa deverá finalizar quanto for informado 0(zero) para a matrícula.
Obs2: Crie uma função para converter o valor em reais para dólar, a cotação do dia é
3.54.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float matricula[50][3], matriculaAuxiliar = 1;
int cont = 0;

void converterDollar (float matricula[50][3] = {}) 
{
	for (int i = 0; i < cont; i++) {
		matricula[i][2] = matricula[i][1]/3.54;
	}
}

main()
{	
	while(matriculaAuxiliar != 0) {
		printf("Informe a matricula: ");
		scanf("%f", &matriculaAuxiliar);
		fflush(stdin);
		if (matriculaAuxiliar == 0) {
			break;
		}
		matricula[cont][0] = matriculaAuxiliar;
		printf("Informe o salario: ");
		scanf("%f", &matricula[cont][1]);
		fflush(stdin);
		cont ++;
	}
	
	converterDollar(matricula);
	
	for (int i = 0; i < cont; i++) {
		printf("\nMatricula: %.0f \t Salario BRL: R$ %.2f \t Salario Dollar: U$ %.2f", matricula[i][0], matricula[i][1], matricula[i][2]);
	}
}
