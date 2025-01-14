#ifndef __TAD_MATRIZ__
    #define __TAD_MATRIZ__
    MMatriz mat_cria(int m,int n){
        MMatriz mat = (MMatriz) malloc (Matriz);
        mat->linha=m;
        mat-> coluna=n;

        mat-> v= (float**)malloc(m* sizeof(float*));
        for(int i=0;i<m;i++){
            mat->v[i]= (float*)malloc(n*sizeof(float));
            for(int j=0;j<n;j++){
                printf("Matriz posicao [%d][%d]: ",i,j);
                scanf("%f",&mat->v[i][j]);
            }

        }

    }

    void mat_libera(MMatriz mat){
        for(int i=0;i<mat->linhas;i++){
            free(mat->v(i));
        }
        free(mat->v);
        free(mat);
    }

    float mat_acessa(MMatriz mat, int i,int j){
        return mat->v[i][j];
    }

    void mat_atribui(MMatriz mat,int i,int j){

    }

    int mat_linhas(MMatriz mat){
        return mat->linhas;
    }

    int mat_colunas(MMatriz mat){
        return mat->colunas;
    }
#endif




for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        printf("[%d][%d]: |%.2f|",i,j,mat_acessa(mat,a,b))
    }

}
