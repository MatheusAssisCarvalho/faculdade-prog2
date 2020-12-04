/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 29/09/2020
Data de Modifocacao: 29/09/2020
*/
/*
2- Faça um programa em C para registrar as doações realizadas no evento
beneficente Baile da 3ª idade. Os dados a serem registrados são: Nome,
Sexo e Valor da doação. (3,0)
Ao final das inscrições o programa deverá exibir:
a) A quantidade de pessoas que doaram acima de 50 reais.
b) A média do valor da doação por pessoa.
Obs.: O evento será "fechado" e terá a participação de apenas 150
convidados. 
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int qtd = 150, auxiliar = 0;
float doacao50 = 0, totalDoacao = 0;

typedef struct {
	char nome[50];
	char sexo[1];
	float valorDoacao = rand()%100;
} cadastro;

cadastro doacao[150];

void criacaoNome() {
	auxiliar = 0;
	for (int i = 0; i < qtd; i++) {
		auxiliar = rand()%3;
		if (auxiliar == 0) {
			strcpy(doacao[i].nome, "Suzanne");
		} else if (auxiliar == 1) {
			strcpy(doacao[i].nome, "Matheus");
		} else if (auxiliar == 2) {
			strcpy(doacao[i].nome, "Luciano");
		}
	}
}
void criacaoSexo() {
	int auxiliar = 0;
	for (int i = 0; i < qtd; i++) {
		auxiliar = rand()%2;
		if (auxiliar == 0) {
			strcpy(doacao[i].sexo, "M");
		} else if (auxiliar == 1) {
			strcpy(doacao[i].sexo, "F");
		}
	}
}
void doacaoDe50() {
	for (int i = 0; i < qtd; i++) {
		if (doacao[i].valorDoacao >= 50) {
			doacao50 ++;
		}
	}
	printf("\n\nQuantidade de valores doados acima de 50 reais: %.2f unidades", doacao50);
}
void doacaoTotal() {
	for (int i = 0; i < qtd; i++) {
		totalDoacao += doacao[i].valorDoacao;
	}
	printf("\n\nValor total de doacao: R$ %.2f", totalDoacao);
}
void imprimirDoacoes() {
	for (int i = 0; i < qtd; i++) {
		printf("\nNome: %s \t Sexo: %s \t Valor doado: R$ %.2f",
		doacao[i].nome,
		doacao[i].sexo,
		doacao[i].valorDoacao);
	}
}
main()
{
	printf("------ Bem vindo Ao Baile Beneficente da 3 idade -------\n\n");
	
	criacaoNome();
	criacaoSexo();
	imprimirDoacoes();
	doacaoDe50();
	doacaoTotal();

	printf("\n\n------ Obrigado e volte sempre -------\n\n");
}
