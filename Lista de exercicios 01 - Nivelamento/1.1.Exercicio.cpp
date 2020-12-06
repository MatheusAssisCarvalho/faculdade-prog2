/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
1) Faça um programa em C para receber o Nome e as 3 Notas de um Aluno. Ao final, calcule e imprima a média aritmética deste aluno.
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
main()
{
 	float aluno[2] = {};
 	int i;
 	
 	for (i = 0; i<3; i++) {
 		printf("Informe a nota do aluno: ");
 		scanf("%f", &aluno[i]);
 		fflush(stdin);
	}
	
	for (i = 0; i<3; i++) {
		printf("\nValor da %d nota: %.2f", i+1, aluno[i]);
 	}
 	
 	printf("\n\nA media do aluno foi: %.2f", (aluno[0]+aluno[1]+aluno[2])/3);
}
