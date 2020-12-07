/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 15/09/2020
Data de Modifocacao: 15/09/2020
*/
/*
8.1) Faça um programa em C para obter o Nome e a Idade dos participantes do
torneio de tênis da cidade de Macaé e exibir a quantidade de
participantes inscritos em cada categoria conforme tabela abaixo.
De 10 a 17 ? Juvenil
De 18 a 40 ? Adulto
Acima de 40 ? Master
Obs.: O programa deve ser finalizado quando a palavra “Sair” for digitada.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int idade[50], i=0, cont = 0, juvenil = 0, adulto = 0, master = 0;
char nomes[50];

void separacaoIdade (int idade[50] = {}) 
{
	for(int i = 0; i < cont; i++) {
		if (idade[i] >= 10 && idade[i] <= 17){
			juvenil += 1;
		} else if (idade[i] >= 18 && idade[i] <= 40) {
			adulto += 1;
		} else {
			master += 1;
		}
	}
}

main()
{	
	while (i != 1) {
		printf("Informe o nome do participante: ");
		gets(nomes);
		fflush(stdin);
		printf("Informe a idade do participante: ");
		scanf("%d", &idade[cont]);
		fflush(stdin);
		cont += 1;
		printf("\nDeseja continuar? Sim - 0 e Nao - 1 :");
		scanf("%d", &i);
		fflush(stdin);
	}
	
	separacaoIdade(idade);
	
	printf("\nDe 10 a 17 ? Juvenil : %d", juvenil);
	printf("\nDe 18 a 40 ? Adulto : %d", adulto);
	printf("\nAcima de 40 ? Master : %d", master);
}
