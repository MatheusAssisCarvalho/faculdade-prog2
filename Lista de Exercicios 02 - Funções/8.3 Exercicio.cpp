/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
8.3) Faça um programa para obter o nome e as 2 notas dos 28 alunos da turma
de Prog1 da FeMass, que serão informadas pelo Professor.
a. O programa deverá calcular a média das 2 notas de cada aluno e exibir
“Aprovado” caso seja igual ou superior a 7.0 e “Reprovado” para
inferior.
b. As variáveis para o Nome, Notas e Situação deverão ser
obrigatoriamente do tipo VETOR.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float media[50], nota1[50], nota2[50]; 
int qtd = 26;
char nome[50][50], situacao[50][50];

void mediaESituacao (float nota1[50] = {}, float nota2[50] = {}) 
{
	for(int i = 0; i < qtd; i++) {
		media[i] = (nota1[i]+nota2[i])/2;
		if (media[i] >= 7.0) {
			strcpy(situacao[i], "Aprovado");
		} else {
			strcpy(situacao[i], "Reprovado");
		}
	}
}

main()
{	
	for (int i = 0; i < qtd; i++) {
		printf("Informe o nome do aluno: ");
		gets(nome[i]);
		fflush(stdin);
		printf("Nota 1: ");
		scanf("%f", &nota1[i]);
		fflush(stdin);
		printf("Nota 2: ");
		scanf("%f", &nota2[i]);
		fflush(stdin);
	}
	mediaESituacao(nota1, nota2);
	
	for (int i = 0; i < qtd; i++) {
		printf("\nAluno: %s \tMedia: %f e a Situacao: %s", nome[i], media[i], situacao[i]);
	}
}
