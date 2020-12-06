/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
3.4) Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21 anos. Total de pessoas com mais de 50 anos. O programa termina quando idade for = 0.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>
main()
{
	int idade, menorDeIdade = 0, maisVelho = 0;
	
	printf("Entre com a idade: ");
	scanf("%d", &idade);
	if (idade <= 21 && idade != 0){
		menorDeIdade++;
	} else if (idade >= 50){
		maisVelho++;
	}
	
	while(idade != 0){
		printf("Entre com a idade: ");
		scanf("%d", &idade);
		if (idade <= 21 && idade != 0){
			menorDeIdade++;
		} else if (idade >= 50){
			maisVelho++;
		}
	}
	
	printf("\nTotal de pessoas menor de 21 anos: %d\n\n", menorDeIdade);
	printf("Total de pessoas maiores de 50 anos: %d\n\n", maisVelho);
	printf("Saindo do programa");
}
