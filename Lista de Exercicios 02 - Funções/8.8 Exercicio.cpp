/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 16/09/2020
Data de Modifocacao: 16/09/2020
*/
/*
8.8) 3- Faça um programa em C para obter o Nome, idade e o sexo dos 30
participantes da meia maratona de Macaé. Ao final o programa deverá
exibir:
a) O nome e idade da pessoa mais velha.
b) O total de homens.
c) O total de mulheres.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int qtd = 4, idade[30], contMasculino = 0, contFeminino = 0, idadeMaisVelho = 0;
char nome[30][50], sexo[30][50], nomeMaisVelho[50];

void maisVelho (int idade[30] = {}) 
{
	for (int i = 0; i < qtd; i++) {
		if (idade[i] > idadeMaisVelho) {
			idadeMaisVelho = idade[i];
			strcpy(nomeMaisVelho, nome[i]);
		}
	}
}
void divideSexo (char sexo[30][50] = {}) 
{
	for (int i = 0; i < qtd; i++) {
		if (strcmp(sexo[i], "Feminino") == 0) {
			contFeminino ++;
		} else {
			contMasculino ++;
		}
	}
}

main()
{	
	for (int i = 0; i < qtd; i++) {
		printf("Informe o nome: ");
		gets(nome[i]);
		fflush(stdin);
		printf("Informe a idade: ");
		scanf("%d", &idade[i]);
		fflush(stdin);
		printf("Informe o sexo: ");
		gets(sexo[i]);
		fflush(stdin);
	}
	
	maisVelho(idade);
	divideSexo(sexo);
	
	printf("\nNome da pessoa mais velha: %s\nIdade da pessoa mais velha: %d", nomeMaisVelho, idadeMaisVelho);
	printf("\n\nTotal de homens: %d\nTotal de mulheres: %d", contMasculino, contFeminino);
	
}
