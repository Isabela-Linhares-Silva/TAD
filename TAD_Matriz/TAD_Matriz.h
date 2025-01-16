#include<stdlib.h>
typedef struct matriz{
    int linha;
    int coluna;
    float** v;
}Matriz;
typedef Matriz* MMatriz;


MMatriz mat_cria(int m,int n);
void mat_libera(MMatriz mat);
float mat_acessa(MMatriz mat, int i,int j);
void mat_atribui(MMatriz mat,int i,int j,float v);//
int mat_linhas(MMatriz mat);
int mat_colunas(MMatriz mat);
MMatriz mat_transposta(MMatriz mat);

#include"TAD_Matriz.c"