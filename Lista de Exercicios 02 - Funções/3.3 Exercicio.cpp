/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 14/09/2020
Data de Modifocacao: 14/09/2020
*/
/*
3.3) Obter 10 números inteiros e imprimir o menor deles
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int* numerosInteiros(int numeros[] = {}) {
	for (int i = 1; i<11; i++) {
		numeros[i] = rand() % 100;
	}
	return numeros;
}

main()
{
	int numeros[] = {};
	numerosInteiros(numeros);
	
	for (int i = 0; i<10; i++) {
		printf("Valor %d: %d\n", i+1, numeros[i]);
	}
}
