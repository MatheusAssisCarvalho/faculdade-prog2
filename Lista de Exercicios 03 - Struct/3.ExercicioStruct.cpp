/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
3. Faça um programa em C para calcular o IMC dos pacientes de uma clínica
de Nutrição.
Para cada paciente será registrado o Nome, Sexo, Peso e Altura.
O programa deverá terminar quando digitar “SAIR” para o nome do
paciente.
Para cada paciente, o programa deverá exibir a classificação de acordo
com a tabela acima.
Quando o programa for finalizado, deve-se exibir o Nome e o Peso de
todos os pacientes Obesos e abaixo do peso.
Deve-se utilizar Struct, Vetor e Função.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int auxiliar = 0, cont = 0, verificacao = 0;
char nomeAuxiliar[50];

typedef struct {
	char nome[50];
	char sexo[1];
	float peso;
	float altura;
	char imc[50];
} cadastro;

cadastro clinica[150];

void criacaoSexo() {
	int auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%2;
		if (auxiliar == 0) {
			strcpy(clinica[i].sexo, "M");
		} else if (auxiliar == 1) {
			strcpy(clinica[i].sexo, "F");
		}
	}
}
void criacaoIMC() {
	for (int i = 0; i < cont; i++) {
		float IMC = clinica[i].peso/((clinica[i].altura/100)*(clinica[i].altura/100));
		if (IMC <= 18.5) {
			strcpy(clinica[i].imc, "Abaixo do peso"); 
		} else if (IMC <= 24.9) {
			strcpy(clinica[i].imc, "Peso ideal"); 
		} else if (IMC <= 29.9) {
			strcpy(clinica[i].imc, "Levemente acima do peso"); 
		} else if (IMC <= 34.9) {
			strcpy(clinica[i].imc, "Obesidade grau I"); 
		} else if (IMC <= 39.9) {
			strcpy(clinica[i].imc, "Obesidade grau II"); 
		} else if (39.9 < IMC) {
			strcpy(clinica[i].imc, "Obesidade grau III"); 
		}
	}
}
void imprimirCasos() {
	for (int i = 0; i < cont; i++) {
		float IMC = clinica[i].peso/((clinica[i].altura/100)*(clinica[i].altura/100));
		if (IMC <= 18.5) {
			printf("\nNome: %s \tSexo: %s \tPeso: %.2f \tAltura: %.2f m \tIMC: %s",
			clinica[i].nome,
			clinica[i].sexo,
			clinica[i].peso,
			clinica[i].altura/100,
			clinica[i].imc);
		} else if (IMC > 29.9) {
			printf("\nNome: %s \tSexo: %s \tPeso: %.2f \tAltura: %.2f m \tIMC: %s",
			clinica[i].nome,
			clinica[i].sexo,
			clinica[i].peso,
			clinica[i].altura/100,
			clinica[i].imc);
		}
	}
}
void imprimirCadastros() {
	for (int i = 0; i < cont; i++) {
		printf("\nNome: %s \tSexo: %s \tPeso: %.2f \tAltura: %.2f m \tIMC: %s",
		clinica[i].nome,
		clinica[i].sexo,
		clinica[i].peso,
		clinica[i].altura/100,
		clinica[i].imc);
	}
}

main()
{
	printf("------ Bem vindo a Clinica de Nutricao. -------\n\n");
	
	while (verificacao == 0) {
		printf("Digite o nome: ");
		scanf("%s", &nomeAuxiliar);
		fflush(stdin);
		if (strcmp(nomeAuxiliar, "SAIR") == 0) {
			verificacao = 1;
			break;
		}
		strcpy(clinica[cont].nome, nomeAuxiliar);
		clinica[cont].peso = (rand()%70)+50;
		clinica[cont].altura = (rand()%50)+150;
		cont++;
	}
	criacaoSexo();
	criacaoIMC();
	imprimirCadastros();
	printf("\n\n------ Pacientes Obesos e abaixo do peso -------\n\n");
	imprimirCasos();
	printf("\n\n------ Obrigado e volte sempre -------\n\n");

}
