/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
2. Faça um programa em C para registrar as lavagens de veículos de um
Lava-Jato.
Deseja-se registrar a Placa, Nome do proprietário, a Categoria (Moto,
Carro ou Caminhão), o Tipo de Lavagem (Básica ou Geral) e o valor
segundo a tabela abaixo:
TIPO DE LAVAGEM
TIPO DE VEÍCULO BÁSICA GERAL
MOTO 10,00 15,00
CARRO 30,00 45,00
CAMINHÃO 70,00 100,00
O programa deverá ser finalizado quanto for informado “SAIR” na placa
do veículo.
Para cada veículo, o programa deverá exibir os dados do mesmo e o
valor à pagar pelo cliente. Exemplo:
PLACA: LLS8788
CATEGORIA: Carro
TIPO LAVAGEM: Geral
VALOR À PAGAR: 45,00
Ao final, o programa deverá exibir:
a) A Quantidade de lavagens efetuadas.
b) O Total de carros que fizeram a lavagem geral.
Deve-se utilizar obrigatoriamente Struct e Função.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int auxiliar = 0, contLav = 0, cont = 0, verificacao = 0, carros = 0;
char placaAuxiliar[50];
float doacao1000 = 0, total = 0;

typedef struct {
	char placa[50];
	char nome[50];
	char categoria[50];
	char lavagem[50];
	float valor;
} cadastro;

cadastro lavado[150];

void criacaoNome() {
	auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%3;
		if (auxiliar == 0) {
			strcpy(lavado[i].nome, "Leticia");
		} else if (auxiliar == 1) {
			strcpy(lavado[i].nome, "Matheus");
		} else if (auxiliar == 2) {
			strcpy(lavado[i].nome, "Zoe");
		}
	}
}
void criacaoCategoria() {
	int auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%3;
		if (auxiliar == 0) {
			strcpy(lavado[i].categoria, "Moto");
		} else if (auxiliar == 1) {
			strcpy(lavado[i].categoria, "Carro");
		} else if (auxiliar == 2) {
			strcpy(lavado[i].categoria, "Caminhao");
		}
	}
}
void criacaoLavagem() {
	auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%2;
		if (strcmp(lavado[i].categoria, "Moto") == 0) {
			if (auxiliar == 0) {
				strcpy(lavado[i].lavagem, "Basica");
				lavado[i].valor = 10;
				contLav++;
			} else if (auxiliar == 1) {
				strcpy(lavado[i].lavagem, "Geral ");
				lavado[i].valor = 15;
				contLav++;
			}
		} else if (strcmp(lavado[i].categoria, "Carro") == 0) {
			if (auxiliar == 0) {
				strcpy(lavado[i].lavagem, "Basica");
				lavado[i].valor = 30;
				contLav++;
				carros++;
			} else if (auxiliar == 1) {
				strcpy(lavado[i].lavagem, "Geral ");
				lavado[i].valor = 45;
				contLav++;
				carros++;
			}
		} else if (strcmp(lavado[i].categoria, "Caminhao") == 0) {
			if (auxiliar == 0) {
				strcpy(lavado[i].lavagem, "Basica");
				lavado[i].valor = 30;
				contLav++;
			} else if (auxiliar == 1) {
				strcpy(lavado[i].lavagem, "Geral ");
				lavado[i].valor = 45;
				contLav++;
			}
		}
		
	}
}
void valorTotal() {
	for (int i = 0; i < cont; i++) {
		total += lavado[i].valor;
	}
	printf("\n\nValor total de lavagem: R$ %.2f", total);
}

void imprimirLavagens() {
	for (int i = 0; i < cont; i++) {
		printf("\nPlaca: %s\tNome: %s \tCategoria: %s \tLavagem: %s \tValor a pagar: R$ %.2f",
		lavado[i].placa,
		lavado[i].nome,
		lavado[i].categoria,
		lavado[i].lavagem,
		lavado[i].valor);
	}
}

main()
{
	printf("------ Bem vindo Ao LavaJato do C++! -------\n\n");
	
	while (verificacao == 0) {
		printf("Digite a Placa: ");
		scanf("%s", &placaAuxiliar);
		fflush(stdin);
		if (strcmp(placaAuxiliar, "SAIR") == 0) {
			verificacao = 1;
			break;
		}
		strcpy(lavado[cont].placa, placaAuxiliar);
		cont++;
	}
	criacaoNome();
	criacaoCategoria();
	criacaoLavagem();
	imprimirLavagens();
	printf("\n\nTotal de veiculos lavados: %i", cont);
	printf("\n\nQuantidade de carros lavados: %i", carros);

	printf("\n\n------ Obrigado e volte sempre -------\n\n");
}
