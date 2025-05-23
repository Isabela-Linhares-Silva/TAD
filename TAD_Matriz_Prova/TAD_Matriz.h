#include<stdio.h>
#include<stdlib.h>

typedef struct matriz
{
    int linhas;
    int colunas;
    float ** v;

}Matriz;
typedef Matriz* MMatriz;

MMatriz cria_matriz(int l,int c);

#include"TAD_Matriz.c"