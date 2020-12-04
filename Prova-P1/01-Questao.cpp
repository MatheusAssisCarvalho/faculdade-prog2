/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 29/09/2020
Data de Modifocacao: 29/09/2020
*/
/*
1- Fa�a um programa em C para uma pizzaria delivery. (7,0)
O programa dever� obter o Telefone (com o DDD), Endere�o de entrega,
Sabor da pizza e o se deseja ou n�o o refrigerante. Para cada pedido,
o programa dever� calcular e exibir o valor a pagar com base na tabela
de pre�os abaixo. Ao final do expediente, o programa dever� exibir o
total de pedidos e o total do faturamento.
Muzzarela ? R$ 20,00
Portuguesa ? R$ 25,00
Camar�o ? R$ 35,00
Refrigerante ? R$ 5,00
O programa dever� obter os dados da seguinte forma:
Telefone com DDD (apenas n�meros):
Endere�o de Entrega:
Sabor da Pizza [Muzzarela, Portuguesa ou Camar�o]:
Refrigerante? [S/N]:
Obs1: O programa dever� ser finalizado ao digitar 0 (zero) no telefone.
Obs2: O programa dever� conter 2 fun��es: uma fun��o para calcular e
retornar o valor a pagar e outra para contabilizar a quantidade de
pedidos e o total do faturamento.
Obs3: O sabor da pizza dever� ser digitado, exemplo: �Muzzarela�. Favor 
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int tel = 1, auxiliarSabor = 0, contPedidos = 0;
float total, totalFat = 0;
int MUZZARELA = 20, PORTUGUESA = 25, CAMARAO = 35, REFRIGERANTE = 5;
char endereco[50], sabor[50], refrigeranteS[2];

void totalAPagar() {
	if (strcmp(sabor, "Muzzarela") == 0) {
			auxiliarSabor = 1;
			total += MUZZARELA;
	} else if (strcmp(sabor, "Portuguesa") == 0) {
		auxiliarSabor = 1;
		total += PORTUGUESA;
	} else if (strcmp(sabor, "Camarao") == 0) {
		auxiliarSabor = 1;
		total += CAMARAO;
	}
}
void totalFaturamento() {
	contPedidos ++;
	totalFat += total;
}

main()
{
	printf("------ Bem vindo a pizzaria BellaPizza! -------\n\n");

	while (tel != 0) {
		total = 0;
		auxiliarSabor = 0;
		printf("\n\nPor favor, informe o telefone: ");
		scanf("%d", &tel);
 		fflush(stdin);
		if (tel == 0) {
			break;
		}
		printf("Por favor, informe o endereco de entrega: ");
		gets(endereco);
 		fflush(stdin);
		while (auxiliarSabor != 1) {
			printf("Por favor, informe o sabor [Muzzarela, Portuguesa ou Camarao]: ");
			gets(sabor);
 			fflush(stdin);
 			totalAPagar();
		}
		printf("Por favor, informe se deseja refrigerante [S/N]: ");
		gets(refrigeranteS);
 		fflush(stdin);
		if (strcmp(refrigeranteS, "S") == 0 || strcmp(refrigeranteS, "s") == 0) {
			total += REFRIGERANTE;
		}

		printf("\n\nTotal a pagar: R$ %.2f", total);
		totalFaturamento();
	}
	
	printf("\n\nTotal de pedidos: %d\n\nTotal de faturamento: R$ %.2f", contPedidos, totalFat);
	printf("\n\n------ Obrigado e volte sempre a pizzaria BellaPizza! -------\n\n");
}
