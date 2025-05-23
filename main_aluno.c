#include<stdio.h>
#include"TAD_Aluno/TAD_Aluno.h"
int main(){
    AAluno* luno= cria_aluno(3);
    insere_aluno(luno,3);


    printf("\nLista antes: \n");
    imprime_aluno(luno,3);
    printf("\n\n");
    modifica_aluno(luno,3);
    printf("\nLista depois\n");
    imprime_aluno(luno,3);
    libera_lista(luno,3);
    return 0;
}
