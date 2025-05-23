#include<stdlib.h>
#include<stdio.h>
typedef struct aluno
{
    int mat;
    char nome[90];
    int idade;
    char curso[50];
}Aluno;
typedef Aluno* AAluno;

AAluno* cria_aluno(int n);
void insere_aluno(AAluno* a,int n);
void busca_aluno(AAluno* a, int matricula);
void modifica_aluno(AAluno* a, int matricula);
void imprime_aluno(AAluno* a,int n);
void remove_aluno(AAluno* a, int matricula);
void libera_lista(AAluno* a,int n);
#include"TAD_Aluno.c"