/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 01/12/2020
Data de Modifocacao: 01/12/2020
*/
/*
1- Fa�a um programa em C para controlar as refei��es vendidas no bandej�o
da FEMASS.
Para cada pedido, o programa dever� registrar a Matr�cula, Nome, Curso,
C�digo da refei��o e se deseja sobremesa ou n�o.
Card�pio:
C�digo Nome do Prato Pre�o Descri��o do prato
10 Picadinho de carne 15,00 Arroz, feij�o, picadinho de carne,
salada + refrigerante
20 Frango � Parmegiana 12,00 Arroz, Frango � parmegiana, batata
frita + refrigerante
30 Espaguete � Bolonhesa 10,00 Spaguete coberto com molho fresco
de carne mo�da + queijo ralado +
refrigerante

Cada aluno s� poder� comprar uma �nica refei��o.
? O aluno poder� pedir uma sobremesa (Pudim de leite ou Gelatina).
Caso o fa�a, deve ser adicionado ao seu pedido o valor de R$ 5,00.
? O programa dever� terminar quando digitar 0(zero) para a matr�cula
do aluno.
? Para cada pedido, o programa dever� calcular e exibir na tela a
matr�cula do aluno, o nome do prato escolhido e o valor total a
pagar.
? Ao final, o programa dever� exibir a quantidade de cada prato
vendido e o total do faturamento.
O programa dever� obrigatoriamente possuir Typedef, Struct, Vari�vel
Ponteiro para registrar os dados de cada pedido, Fun��o com passagem por
valor e Fun��o com passagem por refer�ncia.

*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

typedef struct {
	char matricula[50];
	char nome[50];
	char curso[50];
	int codigo;
	char nomePrato[50];
	float valor;
	char sobremesa[50];
} cadastro;


void criacaoNome(int *x, cadastro* pedidox) {
	int auxiliar = 0;
	
	for (int i = 0; i < *x; i++) {
		auxiliar = rand()%3;
		if (auxiliar == 0) {
			strcpy(pedidox[i].nome, "Leticia");
		} else if (auxiliar == 1) {
			strcpy(pedidox[i].nome, "Matheus");
		} else if (auxiliar == 2) {
			strcpy(pedidox[i].nome, "Zoe");
		}
	}
}
void criacaoCurso(int *x, cadastro* pedidox) {
	int auxiliar = 0;
	for (int i = 0; i < *x; i++) {
		auxiliar = rand()%4;
		if (auxiliar == 0) {
			strcpy(pedidox[i].curso, "Eng");
		} else if (auxiliar == 1) {
			strcpy(pedidox[i].curso, "SI ");
		} else if (auxiliar == 2) {
			strcpy(pedidox[i].curso, "Mat");
		} else if (auxiliar == 3) {
			strcpy(pedidox[i].curso, "ADM");
		}
	}
}
void criacaoPedido(int *x, cadastro* pedidox) {
	int auxiliar = 0;
	for (int i = 0; i < *x; i++) {
		auxiliar = rand()%3;
		if (auxiliar == 0) {
			pedidox[i].codigo = 10;
			pedidox[i].valor = 15.00;
			strcpy(pedidox[i].nomePrato, "Picadinho de carne   ");
		} else if (auxiliar == 1) {
			pedidox[i].codigo = 20;
			pedidox[i].valor = 12.00;
			strcpy(pedidox[i].nomePrato, "Frango a Parmegiana  ");
		} else if (auxiliar == 2) {
			pedidox[i].codigo = 30;
			pedidox[i].valor = 10.00;
			strcpy(pedidox[i].nomePrato, "Espaguete a Bolonhesa");
		}
	}
}
void criacaoSobremesa(int *x, cadastro* pedidox) {
	int auxiliar1 = 0, auxiliar2 = 0;
	for (int i = 0; i < *x; i++) {
		auxiliar1 = rand()%3;
		if (auxiliar1 == 0) {
			strcpy(pedidox[i].sobremesa, "Pudim");
			pedidox[i].valor += 5.00;
		} else if (auxiliar1 == 1) {
			strcpy(pedidox[i].sobremesa, "Gelatina");
			pedidox[i].valor += 5.00;
		} else {
			strcpy(pedidox[i].sobremesa, "S Sobrem");
		}
		
	}
}

void totalVendidoPorPrato(int *x, cadastro* pedidox, int *prato10, int *prato20, int *prato30, float *valorTotal) {
	for (int i = 0; i < *x; i++) {
		if (pedidox[i].codigo == 10) {
			*prato10 += 1;
			*valorTotal += pedidox[i].valor;
		} else if (pedidox[i].codigo == 20) {
			*prato20 += 1;
			*valorTotal += pedidox[i].valor;
		} else if (pedidox[i].codigo == 30) {
			*prato30 += 1;
			*valorTotal += pedidox[i].valor;
		}
	}
	printf("\n\nTotal do Picadinho de carne: %d", *prato10);
	printf("\nTotal do Frango a Parmegiana: %d", *prato20);
	printf("\nTotal do Espaguete a Bolonhesa: %d", *prato30);
	printf("\nValor total do faturamento: R$ %.2f", *valorTotal);
}

void imprimirPedidos(int *x, cadastro* pedidox) {
	printf("\nMatricula: \tNome: \tCurso:   Cod: \tPrato: \t\t\tValor: \t\tSobrem: ");
	for (int i = 0; i < *x; i++) {
		printf("\n%s\t%s\t%s       %d\t%s\tR$ %.2f\t%s",
		pedidox[i].matricula,
		pedidox[i].nome,
		pedidox[i].curso,
		pedidox[i].codigo,
		pedidox[i].nomePrato,
		pedidox[i].valor,
		pedidox[i].sobremesa);
	}
}

main()
{
	printf("------ Bem vindo Ao Bandej�o da FeMASS. -------\n\n");
	
	int x = 0, *px = &x, cont = 0, prato10 = 0, prato20 = 0, prato30 = 0;
	float valotTotal = 0;
	printf("Quantos pedidos deseja fazer (Pode digitar 0 para terminar antes): ");
	scanf("%d", &*px);
	cadastro pedido[x];
	cadastro *p = &pedido[x];
	
	while (cont < *px) {
		printf("Digite a matricula: ");
		scanf("%s", &pedido[cont].matricula);
		fflush(stdin);
		if (strcmp(pedido[cont].matricula, "0") == 0) {
			x = cont;
			break;
		}
		cont++;
	}
	criacaoNome(&x, pedido);
	criacaoCurso(&x, pedido);
	criacaoPedido(&x, pedido);
	criacaoSobremesa(&x, pedido);
	imprimirPedidos(&x, pedido);
	totalVendidoPorPrato(&x, pedido, &prato10, &prato20, &prato30, &valotTotal);
	

	printf("\n\n------ Obrigado e volte sempre -------\n\n");
}
