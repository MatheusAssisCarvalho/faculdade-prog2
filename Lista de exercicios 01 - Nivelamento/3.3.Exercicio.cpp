/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
3.3) Obter 10 números inteiros e imprimir o menor deles.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>
main()
{
	int i, numero, menor = 100;
	
	for (i = 0; i < 10; i++) {
		numero = rand() % 101;
		printf("Numero: %d\n", numero);
		
		if (numero < menor) {
			menor = numero;
		}
	}
	
	printf("\nMenor numero: %d\n\n", menor);
	printf("Saindo do programa");
}
