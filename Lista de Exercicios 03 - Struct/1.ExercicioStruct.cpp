/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
1. Faça um programa em C para registrar as inscrições para o evento
beneficente Criança Esperança.
Os dados são: CPF, Nome, Sexo, Idade, Profissão e Valor da doação.
Ao final das inscrições o programa deverá exibir:
a) A quantidade de homens e mulheres inscritos.
b) A quantidade de pessoas acima de 60 anos.
c) A quantidade de pessoas que doaram acima de 1.000 reais.
d) Valor total arrecadado.
O programa termina quando digitar 0 (zero) para o CPF.
Deve-se utilizar obrigatoriamente Struct, Vetor e Função.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int auxiliar = 0, cont = 0, verificacao = 0;
char cpfAuxiliar[50];
float doacao1000 = 0, totalDoacao = 0;

typedef struct {
	char cpf[50];
	char nome[50];
	char sexo[1];
	int idade;
	char profissao[50];
	float valorDoacao;
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
void doacaoDe1000() {
	for (int i = 0; i < cont; i++) {
		if (doacao[i].valorDoacao >= 1000) {
			doacao1000 ++;
		}
	}
	printf("\n\nQuantidade de valores doados acima de 1000 reais: %.2f de doacoes", doacao1000);
}
void imprimirDoacoes() {
	for (int i = 0; i < cont; i++) {
		printf("\nCPF: %s\tNome: %s \tSexo: %s \tIdade: %i \tProfissao: %s \tValor doado: R$ %.2f",
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
	printf("------ Bem vindo Ao evento beneficente Criança Esperança. -------\n\n");
	
	while (verificacao == 0) {
		printf("Digite o CPF: ");
		scanf("%s", &cpfAuxiliar);
		fflush(stdin);
		if (strcmp(cpfAuxiliar, "0") == 0) {
			verificacao = 1;
			break;
		}
		strcpy(doacao[cont].cpf, cpfAuxiliar);
		doacao[cont].idade = (rand()%99)+1;;
		doacao[cont].valorDoacao = (rand()%3000) + 1;
		cont++;
	}
	criacaoNome();
	criacaoSexo();
	criacaoProfissao();
	imprimirDoacoes();
	doacaoDe1000();
	doacaoTotal();

	printf("\n\n------ Obrigado e volte sempre -------\n\n");
}
