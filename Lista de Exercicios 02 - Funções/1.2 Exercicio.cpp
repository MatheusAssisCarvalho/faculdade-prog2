/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 14/09/2020
Data de Modifocacao: 14/09/2020
*/
/*
2) Faça um programa em C para obter o nome e o salário de um funcionário. Ao final,
calcule e imprima o salário obtido acrescido de 10%.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float salarioAcrescido(float salario) {
	salario = salario*1.1;
	return salario;
}


main()
{
 	float salario;
 	char nome[50];
 	
 	printf("Informe o nome do funcionario: ");
 	gets(nome);
 	fflush(stdin);
 	printf("Informe o salario do funcionario: ");
 	scanf("%f", &salario);
 	fflush(stdin);
 	
 	printf("\n\nO salario acrescido: %.2f", salarioAcrescido(salario));
}
