/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 03/09/2020
Data de Modifocacao: 03/09/2020
*/
/*
1) Faça um programa em C para receber o Nome e as 3 Notas de um Aluno. Ao final,
calcule e imprima a média aritmética deste aluno.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float* cadastraNota(float array[], int qtd) {
	for (int i = 0; i<qtd; i++) {
 		printf("Informe a nota do aluno: ");
 		scanf("%f", &array[i]);
 		fflush(stdin);
	}
	return array;
}

float mostrarNota(float array[], int qtd) {
	for (int i = 0; i<qtd; i++) {
		printf("\nValor da %d nota: %.2f", i+1, array[i]);
 	}
}

float mediaNota(float array[], int qtd) {
	float soma, cont;
	for (int i = 0; i<qtd; i++) {
		soma += array[i];
		cont ++;
	}
	return soma/cont;
}

main()
{
 	float aluno[] = {};
 	int i;
 	
 	printf("Informe a quandidade de cadastros: ");
 	scanf("%d", &i);
 	fflush(stdin);
 	
 	cadastraNota(aluno, i);
 	mostrarNota(aluno, i);
 	printf("\n\nA media do aluno foi: %.2f", mediaNota(aluno, i));
}
