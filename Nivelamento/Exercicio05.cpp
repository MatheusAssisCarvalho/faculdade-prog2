/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 18/08/2020
Data de Modifocacao: 18/08/2020
*/
/*
5) Faça um programa em C para obter o as 3 notas de um Aluno. Ao final, calcule e imprima a media aritmetica. As notas deverao ser
armazenadas numa unica variavel do tipo Array.
*/
#include <string.h>
#include <stdio.h>
#include <locale.h>
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
