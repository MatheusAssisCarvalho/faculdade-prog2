/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 14/09/2020
Data de Modifocacao: 14/09/2020
*/
/*
5.4) Faça um programa em C para validar a senha informada pelo usuário. (Inserir CPF,
Nome, E-mail e Senha) e crie a função para validar a senha.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

char validarSenha(char senha[]) {
	char validacao[50];
	
	while (strcmp(senha, validacao) != 0) {
		printf("\nConfirme sua senha: ");
		gets(validacao);
	 	fflush(stdin);
	 	if (strcmp(senha, validacao) == 0){
	 		break;
		} else {
			printf("\nSenha incorreta! \n");
		}
	}
	return printf("\n\nSenha validada!");
}

main()
{
	int cpf;
	char nome[50], email[50], senha[50];
	
	printf("Insira o CPF: ");
	scanf("%d", &cpf);
 	fflush(stdin);
	printf("\nInsira o nome: ");
	gets(nome);
 	fflush(stdin);
	printf("\nInsira o e-mail: ");
	gets(email);
 	fflush(stdin);
	printf("\nInsira a senha: ");
	gets(senha);
 	fflush(stdin);
 	
 	validarSenha(senha);
}
