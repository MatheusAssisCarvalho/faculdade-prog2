/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 12/08/2020
Data de Modifocacao: 12/08/2020
*/
/*
2) Faça um programa em C para obter o nome, sexo e idade. Se o sexo for feminino e a idade menor que 25, imprimir o nome da pessoa e a palavra ACEITA.
Caso contrario, imprimir NÃO ACEITA.
*/

#include <stdio.h>
#include <locale.h>
main()
{
 	int idade;
 	char nome[50], sexo;
 	
 	printf("Entre com o nome: ");
 	scanf("%s", &nome);
 	fflush(stdin);
 	
 	printf("Entre com o sexo: ");
 	scanf("%c", &sexo);
 	
 	printf("Entre com a idade: ");
 	scanf("%d", &idade);
 	
 	if(idade < 25 && sexo == 'F') {
 		printf("\n\nNome da pessoa: %s\nAceita!", nome);
	} else {
		printf("\n\nNao aceita!!");
	}
}
