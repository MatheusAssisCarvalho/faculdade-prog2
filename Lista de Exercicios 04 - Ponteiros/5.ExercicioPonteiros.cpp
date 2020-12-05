/* Programa: 
Autor: Matheus de Assis Carvalho
Data de criacao: 19/11/2020
Data de Modifocacao: 19/11/2020
*/
/*
5. Faça um programa em C para calcular e exibir a nota final dos alunos da
turma de PROGII.
O programa deverá obter a Matrícula, Nome, Curso, Nota da prova (vale
6 pts), Nota do trabalho (vale 3 pts) e Nota de participação (vale 1
pt).(Utilize Struct)
Para cada aluno, o programa deverá calcular e exibir a nota final.
(Utilize Função com passagem por referência)
Ao final, o programa deverá exibir a quantidade de alunos aprovados e
reprovados (nota 7,0 ou superior = aprovado)
(Utilize Função com passagem por valor)
*/
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>
#include <string.h>

int auxiliar = 0, cont = 150, verificacao = 0, matriculaAuxiliar, contAprov = 0, contReprov = 0;

typedef struct {
	int matricula = rand()%8999+1000;
	char nome[50];
	char curso[50];
	int notaProva = rand()%7;
	int notaTrabalho = rand()%4;
	int notaParticipacao = rand()%2;
	int notaFinal;
	char resultado;
} cadastro;

cadastro notas[150];

void criacaoNome() {
	auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%3;
		if (auxiliar == 0) {
			strcpy(notas[i].nome, "Leticia");
		} else if (auxiliar == 1) {
			strcpy(notas[i].nome, "Matheus");
		} else if (auxiliar == 2) {
			strcpy(notas[i].nome, "Zoe");
		}
	}
}

void criacaoCurso() {
	auxiliar = 0;
	for (int i = 0; i < cont; i++) {
		auxiliar = rand()%3;
		if (auxiliar == 0) {
			strcpy(notas[i].curso, "Programacao ");
		} else if (auxiliar == 1) {
			strcpy(notas[i].curso, "Web Design  ");
		} else if (auxiliar == 2) {
			strcpy(notas[i].curso, "Planejamento");
		}
	}
}

int notaFinal(int *pNotaProva, int *pNotaTrabalho, int *pNotaParticipacao, int *pSoma) {
	*pSoma = *pNotaProva + *pNotaTrabalho + *pNotaParticipacao;
	return *pSoma;
}

char* resultadoAlunos(int *pNotaProva, int *pNotaTrabalho, int *pNotaParticipacao, char *pResultado) {
	int pSoma = *pNotaProva + *pNotaTrabalho + *pNotaParticipacao;
	if (pSoma >= 7) {
		strcpy(pResultado, "Aprov");
	} else {
		strcpy(pResultado, "Repro");
	}
}

void contabilizar() {
	for (int i = 0; i < cont; i++) {
		if (notas[i].notaFinal >= 7){
			contAprov++;
		} else {
			contReprov++;
		}
	}
}

void imprimirCadastros() {
	for (int i = 0; i < cont; i++) {
		printf("\nMatricula: %i \tNome: %s \tCurso: %s \tNProva: %i NTrabalho: %i NPart: %i NFinal: %i Resul: %s",
		notas[i].matricula,
		notas[i].nome,
		notas[i].curso,
		notas[i].notaProva,
		notas[i].notaTrabalho,
		notas[i].notaParticipacao,
		notaFinal(&notas[i].notaProva, &notas[i].notaTrabalho, &notas[i].notaParticipacao, &notas[i].notaFinal),
		resultadoAlunos(&notas[i].notaProva, &notas[i].notaTrabalho, &notas[i].notaParticipacao, &notas[i].resultado));
	}
}

main()
{
	printf("------ Bem vindo as notas dos alunos de Prog II. -------\n\n");
	
	criacaoNome();
	criacaoCurso();
	imprimirCadastros();
	contabilizar();
	
	printf("\n\nQuantidade de alunos aprovados: %i\nQuantidade de alunos reprovados: %i", contAprov, contReprov);
}
