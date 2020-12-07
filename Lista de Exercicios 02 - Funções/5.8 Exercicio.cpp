/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
5.8) Obtenha um nome e imprima quantas letras “A” tem este nome.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int contarLetraA(char nome[]) {
	int contA = 0;
	for (int i = 0; i < strlen(nome); i++) {
		if (nome[i] == 'a' || nome[i] == 'A' ){
			contA += 1;
		}
	}
	return printf("\n\nO nome tem %d letras 'A'", contA);
}

main()
{
	char nome[50];
	
	printf("\nInsira o nome: ");
	gets(nome);
 	fflush(stdin);
	 	
 	contarLetraA(nome);
}
