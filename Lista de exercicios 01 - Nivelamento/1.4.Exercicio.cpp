/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 26/08/2020
Data de Modifocacao: 26/08/2020
*/
/*
4) Faça um programa em C para calcular a autonomia (km/L de gasolina) numa viagem de automóvel.
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
main()
{
 	float km, litros;
 	
 	printf("Entre com a quantidade de litros de gasolina: ");
 	scanf("%f", &litros);
	fflush(stdin);
	
	printf("Entre com o km percorrido: ");
 	scanf("%f", &km);
	fflush(stdin);
	
 	printf("A autonomia de km/litros : %.2f km/l", (km/litros));
}
