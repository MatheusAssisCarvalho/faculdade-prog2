/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
3.2) Obter os salários dos funcionários e ao final imprimir a soma dos mesmos. O programa termina quando for digitado um salário igual a 0
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
main()
{
	float salario, soma = 0;
	
	printf("Entre com o salario: ");
	scanf("%f", &salario);
	soma += salario;
	
	while(salario != 0){
		printf("Entre com o salario: ");
		scanf("%f", &salario);
		soma += salario;
	}
	
	printf("Soma dos salarios: %.2f\n\n", soma);
	printf("Saindo do programa");
}
