/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
6.3) Faça um programa para obter o nome e a altura dos 16 atletas de basquete do
Macaé Clube. As alturas dos atletas deverão ser armazenadas em uma matriz de
4x4 elementos. Ao final, o programa deverá exibir:
a) O nome e a altura do atleta mais baixo.
b) O nome e a altura do atleta mais alto.
c) A média de altura dos atletas.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int atletaBaixo(int alturas[4][4], char nomes[4][4][50]) {
	int maisBaixo = 99999999;
	char nomeBaixo[50];
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4; k++) {
			if (alturas[i][k] < maisBaixo) {
				maisBaixo = alturas[i][k];
				strcpy(nomeBaixo, nomes [i][k]);
			}
		}
	}
	return printf("\nNome do atleta mais baixo: %s\nAltura do Atleta mais baixo: %d cm", nomeBaixo, maisBaixo);
}
int atletaAlto(int alturas[4][4], char nomes[4][4][50]) {
	int maisAlto = 0;
	char nomeAlto [50];
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4; k++) {
			if (alturas[i][k] > maisAlto) {
				maisAlto = alturas[i][k];
				strcpy(nomeAlto, nomes[i][k]);
			}
		}
	}
	return printf("\nNome do atleta mais baixo: %s\nAltura do Atleta mais baixo: %d cm", nomeAlto, maisAlto);
}
float mediaAltura(int alturas[4][4]) {
	float valores = 0;
	int contMedia;
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4; k++) {
			valores += alturas[i][k];
			contMedia += 1;
		}
	}
	return printf("\nA media de altura dos atletas: %.0f cm", valores/contMedia);
}

main()
{
	int alturas[4][4], i, k;
	char nomes[4][4][50];
	
	for (i = 0; i < 4; i++) {
		for (k = 0; k < 4; k++) {
			printf("Informe o nome [%d][%d]: ", i+1, k+1);
			scanf("%s", &nomes[i][k]);
 			fflush(stdin);
			printf("Informe a altura [%d][%d]: ", i+1, k+1);
			scanf("%d", &alturas[i][k]);
 			fflush(stdin);
		}
	}
	
	atletaBaixo(alturas, nomes);
	atletaAlto(alturas, nomes);
	mediaAltura(alturas);
}
