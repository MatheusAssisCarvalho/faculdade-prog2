/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
8.4) Faça um programa em C para obter o Código, Tipo e Valor (em reais) dos
130 equipamentos do fabricante Megaturbo.
Obs1.: Os tipos de equipamento são: Submarinos, Terrestres e Híbridos. O usuário
não irá digitar outro tipo de equipamento.
Obs2.: Todos os equipamentos possuem valores diferentes.
As variáveis deverão ser do tipo VETOR e ao final, o programa deverá exibir:
a) O Código e o valor do equipamento mais caro.
b) A Quantidade de equipamentos Terrestres.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float valor[130], maiorValor = 0; 
int qtd = 130, codigo[130], codigoMaior, contTerrestre = 0;
char tipo[130][50];

void equipamentoMaisCaro (float valor[50] = {}) 
{
	for(int i = 0; i < qtd; i++) {
		if (valor[i] > maiorValor) {
			maiorValor = valor[i];
			codigoMaior = codigo[i];
		} 
	}
}
void quantidadeTerrestre (char tipo[130][50] = {}) 
{
	for(int i = 0; i < qtd; i++) {
		if (strcmp(tipo[i],"Terrestre") == 0) {
			contTerrestre += 1;
		} 
	}
}

main()
{	
	for (int i = 0; i < qtd; i++) {
		printf("Informe o codigo do equipamento: ");
		scanf("%d", &codigo[i]);
		fflush(stdin);
		printf("Informe o tipo de equipamento: ");
		gets(tipo[i]);
		fflush(stdin);
		printf("Informe o valor do equipamento: ");
		scanf("%f", &valor[i]);
		fflush(stdin);
	}
	
	equipamentoMaisCaro(valor);
	quantidadeTerrestre(tipo);
	
	printf("\n\nCodigo: %d e valor do item mais caro: R$ %.2f", codigoMaior, maiorValor);
	printf("\nA quantidade de terrestres e: %d", contTerrestre);
}
