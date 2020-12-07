/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 14/09/2020
Data de Modifocacao: 14/09/2020
*/
/*
4) Faça um programa em C para calcular a autonomia (km/L de gasolina) numa viagem
de automóvel.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

float autonimia(float km, float litro) {
	float autonomia = km/litro;
	return autonomia;
}


main()
{
 	float km, litro;
 	int codigo;
 	
 	printf("Informe quantos km's foram rodados: ");
 	scanf("%f", &km);
 	fflush(stdin);
 	printf("Informe quantos litros foram consumidos: ");
 	scanf("%f", &litro);
 	fflush(stdin);
 	
 	printf("\n\nA autonomia do veiculo e: %.2f", autonimia(km, litro));
}
