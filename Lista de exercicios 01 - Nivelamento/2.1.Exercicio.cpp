/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
2.1) Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. Imprimir o nome da pessoa e a palavra ACEITA. Caso contrario imprimir NAO ACEITA
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
main()
{
 	int idade;
 	char nome[50], sexo[2], fem[2] = "f", masc[2] = "m";
 	
 	printf("Entre com seu nome: ");
 	scanf("%s", &nome);
	fflush(stdin);
	
	printf("Entre com o sexo (m ou f): ");
	gets(sexo);
	fflush(stdin);
	
	printf("Entre com a idade : ");
 	scanf("%d", &idade);
	fflush(stdin);
	
	if (strcmp(sexo , fem) == 0 && idade < 25) {
		printf("ACEITA");
	} else {
		printf("NAO ACEITA");
	}
}
