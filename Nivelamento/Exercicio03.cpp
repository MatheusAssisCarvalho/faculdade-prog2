/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 12/08/2020
Data de Modifocacao: 12/08/2020
*/
/*
2) Faça um programa em C para obter o salario dos funcionarios e ao final imprimir a soma dos mesmos. O programa termina quando for digitado um salario igual a 0
*/
#include <stdio.h>
#include <locale.h>
main()
{
 	int salario = 1, soma;
 	
 	while (salario != 0) {
 		printf("Entre com o salario: ");
 		scanf("%d", &salario);
 		soma += salario;
	}
 	printf("A soma de todos os salarios: %d", soma);
}
