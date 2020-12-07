/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 14/09/2020
Data de Modifocacao: 14/09/2020
*/
/*
3.4) Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21
anos. Total de pessoas com mais de 50 anos. O programa termina quando idade for = 0.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int dividirIdades(int idade[] = {}) {
	int menorQue21 = 0, maiorQue50 = 0;
	for (int i = 0; i<10; i++) {
		if (idade[i] < 21) {
			menorQue21 += 1;
		} else if (idade[i] > 50) {
			maiorQue50 += 1;
		}
	}
	return printf("\nMenores que 21 anos: %d\nMaiores que 50 anos: %d", menorQue21, maiorQue50);
}

main()
{
	int idades[10];
	
	for (int i = 0; i < 10; i++) {
		printf("Informe a idade: ");
		scanf("%d", &idades[i]);
		fflush(stdin);
	}
	
	dividirIdades(idades);
}
