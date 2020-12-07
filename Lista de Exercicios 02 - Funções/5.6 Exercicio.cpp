/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
5.6) Obtenha um nome e imprima quantas letras tem.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

char contarNome(char nome[]) {
	return printf("\n\nO nome tem %d letras", strlen(nome));
}

main()
{
	char nome[50];
	
	printf("\nInsira o nome: ");
	gets(nome);
 	fflush(stdin);
	 	
 	contarNome(nome);
}
