#ifndef __TAD_MATRIZ_C__
#define __TAD_MATRIZ_C__
#include"TAD_Matriz.h"

MMatriz cria_matriz(int l,int c){
    MMatriz mat= (MMatriz)malloc(sizeof(Matriz));
    mat->linhas = l;
    mat->colunas =c;

    mat->v = (float**)malloc(l*sizeof(float*));
    for (int i = 0; i < l; i++)
    {
        mat->v[i]=(float*)malloc(c*sizeof(float));
        for (int j = 0; j < c; j++)
        {
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%f",&mat->v[i][j]);
        }
        
    }
    
    return mat;
}

void libera_mat(MMatriz mat){
    for(int i=0;i<mat->linhas;i++)
    {
        free(mat->v[i]);
    }
    free(mat->v);
    free(mat);

}

float acessa_mat(MMatriz mat, int l,int c){
    return mat->v
}



#endif