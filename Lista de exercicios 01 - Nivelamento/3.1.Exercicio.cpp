/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
3.1) Escrever seu nome na tela 10 vezes. Um nome por linha.
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
main()
{
	int i;
 	char nome[50];
 	
 	printf("Entre com o seu nome: ");
 	gets(nome);
 	
 	for(i = 0; i < 10; i++) {
 		printf("\nSeu nome: %s", nome);
	 }
}
