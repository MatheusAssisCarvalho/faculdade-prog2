/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
4. Faça um programa em C para registrar uma Enquete de votação para um
concurso de Bandas de Rock n Roll.
As 5 bandas que irão se apresentar são: Thunderstruck, COVID-21,
Transgressão, Epic e Overdrive.
Para cada pessoa que irá votar, o programa deverá registrar o CPF,
Nome, Sexo, Idade e a nota da votação.
As notas terão o seguinte formato:
[1] – Péssima
[2] – Ruim
[3] – Regular
[4] – Boa
[5] – Excelente
O programa termina quando digitar “SAIR” no nome da pessoa.
Ao final, o programa deverá exibir:
a) A média da avaliação das 5 bandas
b) A quantidade de pessoas votantes
c) O Nome da banda vencedora
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int auxiliar = 0, cont = 0, verificacao = 0;
float somaThunderstruck = 0, somaCOVID21 = 0, somaTransgressao = 0, somaEpic = 0, somaOverdrive = 0, contFloat = 0;
char nomeAuxiliar[50];

typedef struct {
	char nome[50];
	long int cpf1;
	long int cpf2;
	char sexo[1];
	int idade;
	int Thunderstruck = (rand()%4)+1;
	int COVID21 = (rand()%4)+1;
	int Transgressao = (rand()%4)+1;
	int Epic = (rand()%4)+1;
	int Overdrive = (rand()%4)+1;
} cadastro;

cadastro votacao[150];

void criacaoSexo() {
	int auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%2;
		if (auxiliar == 0) {
			strcpy(votacao[i].sexo, "M");
		} else {
			strcpy(votacao[i].sexo, "F");
		}
	}
}

char* notaBanda(int nome) {
	if (nome == 1) {
		return "1-Pessima  ";
	} else if (nome == 2) {
		return "2-Ruim     ";
	} else if (nome == 3) {
		return "3-Regular  ";
	} else if (nome == 4) {
		return "4-Boa      ";
	} else {
		return "5-Excelente";
	}
}
void cadastrarNotas() {
	for (int i = 0; i < cont; i++) {
		somaThunderstruck += votacao[i].Thunderstruck;
		somaCOVID21 += votacao[i].COVID21;
		somaTransgressao += votacao[i].Transgressao;
		somaEpic += votacao[i].Epic;
		somaOverdrive += votacao[i].Overdrive;
	}
}
void imprimirMedias() {
	printf("\n\nMedia Thunderstruck: %.2f", somaThunderstruck/cont);
	printf("\nMedia COVID21: %.2f", somaCOVID21/cont);
	printf("\nMedia Transgressao: %.2f", somaTransgressao/cont);
	printf("\nMedia Epic: %.2f", somaEpic/cont);
	printf("\nMedia Overdrive: %.2f", somaOverdrive/cont);
}
void imprimirCadastros() {
	printf("\nNome \t\tCPF \t\tSexo \tIdade \tThunder \tCOVID21 \tTransg \t\tEpic \t\tOver");
	for (int i = 0; i < cont; i++) {
		printf("\n%s \t%li%li \t%s \t%i \t%s \t%s \t%s \t%s \t%s",
		votacao[i].nome,
		votacao[i].cpf1,
		votacao[i].cpf2,
		votacao[i].sexo,
		votacao[i].idade,
		notaBanda(votacao[i].Thunderstruck),
		notaBanda(votacao[i].COVID21),
		notaBanda(votacao[i].Transgressao),
		notaBanda(votacao[i].Epic),
		notaBanda(votacao[i].Overdrive));
	}
}

main()
{
	printf("------ Bem vindo a Enquete de votacao. -------\n\n");
	
	while (verificacao == 0) {
		printf("Digite o nome: ");
		scanf("%s", &nomeAuxiliar);
		fflush(stdin);
		if (strcmp(nomeAuxiliar, "SAIR") == 0) {
			verificacao = 1;
			break;
		}
		strcpy(votacao[cont].nome, nomeAuxiliar);
		votacao[cont].cpf1 = (rand()%89998)+10000;
		votacao[cont].cpf2 = (rand()%899998)+100000;
		votacao[cont].idade = (rand()%50)+19;
		cont++;
	}
	criacaoSexo();
	cadastrarNotas();
	imprimirCadastros();
	imprimirMedias();
	printf("\nQuantidade de pessoas votantes: %i", cont);
	printf("\n\n------ Obrigado e volte sempre -------\n\n");

}
