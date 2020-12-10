/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 18/08/2020
Data de Modifocacao: 18/08/2020
*/
/*
6) Faça um programa para obter numeros inteiros informados pelo usuario e armazene-os em uma matriz 3x3 elementos.
Multiplique cada elemento por 5 e imprima o resultado.
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
main()
{
 	int matriz[3][3] = {}, i, k;
 	
 	for (i = 0; i<3; i++){
 		for (k = 0; k < 3; k++) {
 			printf("Informe o %d e %d valor inteiro: ", i+1, k+1);
 			scanf("%d", &matriz[i][k]);
		}
		printf("\n\n");
	}
 	for (i = 0; i<3; i++){
 		for (k = 0; k < 3; k++) {
 			matriz[i][k] = matriz[i][k]*5;
		}
	}
	for (i = 0; i<3; i++){
 		for (k = 0; k < 3; k++) {
 			printf("%d\t", matriz[i][k]);
		}
		printf("\n");
	}
}
