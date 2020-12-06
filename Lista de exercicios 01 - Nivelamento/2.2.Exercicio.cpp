/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
2.2) Receber do teclado a sigla do estado de uma pessoa e imprimir uma das seguintes mensagens: Carioca, Paulista, Mineiro e Outros estados.
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
main()
{
 	char sigla[5], carioca[5] = "rj", paulista[5] = "sp", mineiro[5] = "mg";
 	
 	printf("Entre com a sigla [**]: ");
 	scanf("%s", &sigla);
	fflush(stdin);
	
	if (strcmp(sigla , carioca) == 0) {
		printf("Carioca");
	} else if (strcmp(sigla , paulista) == 0) {
		printf("Paulista");
	} else if (strcmp(sigla , mineiro) == 0) {
		printf("Mineiro");
	} else {
		printf("Outros estados");
	}
}
