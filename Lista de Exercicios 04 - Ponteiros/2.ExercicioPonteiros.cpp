/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 19/11/2020
Data de Modifocacao: 19/11/2020
*/
/*
2. Faça um programa em C para registrar as inscrições para o evento
beneficente EAD NAS ESCOLAS.
Os dados são: CPF, Nome, Sexo, Idade, Profissão e Valor da doação.
Ao final das inscrições o programa deverá exibir:
a) A quantidade de homens e mulheres inscritos.
b) A quantidade de pessoas acima de 60 anos.
c) A quantidade de pessoas que doaram acima de 50 reais.
d) Valor total arrecadado.
Obs1.: O evento é "fechado" e apenas 150 pessoas foram convidadas a
participar.
Obs2.: Deve-se utilizar obrigatoriamente Struct, Ponteiro, Vetor e
Função.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int auxiliar = 0, cont = 150, verificacao = 0;
char cpfAuxiliar[50];
float doacao50 = 0, totalDoacao = 0;

typedef struct {
	long long cpf = (rand()%89999999999)+10000000000;
	char nome[50];
	char sexo[1];
	int idade = (rand()%99)+1;
	char profissao[50];
	float valorDoacao = (rand()%100)+1;
} cadastro;

cadastro doacao[150];

void criacaoNome() {
	auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%3;
		if (auxiliar == 0) {
			strcpy(doacao[i].nome, "Leticia");
		} else if (auxiliar == 1) {
			strcpy(doacao[i].nome, "Matheus");
		} else if (auxiliar == 2) {
			strcpy(doacao[i].nome, "Zoe");
		}
	}
}
void criacaoSexo() {
	int auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%2;
		if (auxiliar == 0) {
			strcpy(doacao[i].sexo, "M");
		} else if (auxiliar == 1) {
			strcpy(doacao[i].sexo, "F");
		}
	}
}
void criacaoProfissao() {
	auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%3;
		if (auxiliar == 0) {
			strcpy(doacao[i].profissao, "Web Dev");
		} else if (auxiliar == 1) {
			strcpy(doacao[i].profissao, "Artesao");
		} else if (auxiliar == 2) {
			strcpy(doacao[i].profissao, "Engenheiro");
		}
	}
}
void doacaoTotal() {
	for (int i = 0; i < cont; i++) {
		totalDoacao += doacao[i].valorDoacao;
	}
	printf("\n\nValor total de doacao: R$ %.2f", totalDoacao);
}
void doacaoDe50() {
	for (int i = 0; i < cont; i++) {
		if (doacao[i].valorDoacao >= 50) {
			doacao50 ++;
		}
	}
	printf("\n\nQuantidade de valores doados acima de 50 reais: %.0f doacoes", doacao50);
}
void imprimirDoacoes() {
	for (int i = 0; i < cont; i++) {
		printf("\nCPF: %lli\tNome: %s \tSexo: %s \tIdade: %i \tProfissao: %s \tValor doado: R$ %.2f",
		doacao[i].cpf,
		doacao[i].nome,
		doacao[i].sexo,
		doacao[i].idade,
		doacao[i].profissao,
		doacao[i].valorDoacao);
	}
}

main()
{
	printf("------ Bem vindo Ao evento beneficente EAD NAS ESCOLAS. -------\n\n");
	
	criacaoNome();
	criacaoSexo();
	criacaoProfissao();
	imprimirDoacoes();
	doacaoDe50();
	doacaoTotal();

	printf("\n\n------ Obrigado e volte sempre -------\n\n");
}
