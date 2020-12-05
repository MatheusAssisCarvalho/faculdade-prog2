/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 19/11/2020
Data de Modifocacao: 19/11/2020
*/
/*
3. Faça um programa em C para calcular o valor total a pagar ao vendedor
de acordo com a tabela de Bônus abaixo:
Tabela de Bônus com base no total de vendas do mês:
Até R$5.000,00 --> Bonus de R$100,00
Entre R$5.000,01 e R$10.000,00 --> Bonus de R$300,00
Entre R$10.000,01 e R$50.000,00 --> Bonus de R$500,00
Acima de R$50.000,00 --> Bonus de R$1.000,00
O programa de verá obter a matrícula do vendedor, o salário e o total
de vendas realizadas no mês.
Ao final, o programa deverá exibir a quantidade de vendedores que
venderam acima de 50.000.
O programa termina quando informar 0 para a matrícula do vendedor.
Neste exercício deverá conter 2 funções:
- Para calcular a quantidade de vendedores que venderam acima de 50.000
reais construa com passagem por valor.
- Para calcular o valor do bônus, construa com passagem por referência.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int auxiliar = 0, cont = 0, verificacao = 0, matriculaAuxiliar, contVend = 0;

typedef struct {
	int matricula;
	float salario = (rand()%1000)+1500;
	float totalVendas = (rand()%100000) + (rand()%100000);
	char bonus[50];
} cadastro;

cadastro vendedor[150];

char* tabelaBonus(float *pTotalVendas, int *i) {
	if (*pTotalVendas <= 5000.00) {
		strcpy(vendedor[*i].bonus, "Bonus de R$  100,00"); 
	} else if (*pTotalVendas <= 10000.00) {
		strcpy(vendedor[*i].bonus, "Bonus de R$  300,00"); 
	} else if (*pTotalVendas <= 50000.00) {
		strcpy(vendedor[*i].bonus, "Bonus de R$  500,00"); 
	} else if (*pTotalVendas > 50000.00) {
		strcpy(vendedor[*i].bonus, "Bonus de R$1.000,00");
	}
}
int qtdVendedor(float *pTotalVendas) {
	if (*pTotalVendas > 50000.00) {
		contVend ++;
	}
}
void imprimirCadastros() {
	for (int i = 0; i < cont; i++) {
		printf("\nMatricula: %i \tSalario: R$%.2f \tTotal Vendas: R$%.2f \tBonus: %s \t",
		vendedor[i].matricula,
		vendedor[i].salario,
		vendedor[i].totalVendas,
		tabelaBonus(&vendedor[i].totalVendas, &i));
	}
}

main()
{
	printf("------ Bem vindo a Tabela de bonus. -------\n\n");
	
	while (verificacao == 0) {
		printf("Digite a matricula: ");
		scanf("%i", &matriculaAuxiliar);
		fflush(stdin);
		if (matriculaAuxiliar == 0) {
			verificacao = 1;
			break;
		}
		vendedor[cont].matricula = matriculaAuxiliar;
		cont++;
	}
	
	imprimirCadastros();
	
	for (int i = 0; i < cont; i++) {
		qtdVendedor(&vendedor[i].totalVendas);
	}
	
	printf("\n\nQuantidade de vendedores que venderam acima de 50.000: %i", contVend);
}
