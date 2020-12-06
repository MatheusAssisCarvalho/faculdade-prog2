/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
2) Faça um programa em C para obter o nome e o salário de um funcionário. Ao final, calcule e imprima o salário obtido acrescido de 10%.
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
main()
{
 	float salario;
 	char nome[50];
 	
 	printf("Entre com o nome do funcionario: ");
 	scanf("%s", &nome);
	fflush(stdin);
	
	printf("Entre com o salario do funcionario: ");
 	scanf("%f", &salario);
	fflush(stdin);
	
 	printf("O salario do funcionario %s acrescido de 10 porcento: R$ %.2f", nome, salario*1.1);
}
