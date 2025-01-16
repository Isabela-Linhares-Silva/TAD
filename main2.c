#include<stdio.h>
#include"TAD_Matriz/TAD_Matriz.h"
int main(){
    MMatriz p= mat_cria(2,2);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           printf("|%d||%d|: %.2f",i,j,mat_acessa(p,2,2));
        }
    }
    return 0;
}