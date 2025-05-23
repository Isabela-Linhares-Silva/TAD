#ifndef __TAD_ALUNO_C__
#define __TAD_ALUNO_C__


AAluno* cria_aluno(int n){
    AAluno*  aluninho= (AAluno*)malloc(n*sizeof(AAluno));
    for (int i = 0; i < n; i++)
    {
        aluninho[i]=NULL;
    }
    return aluninho;
    
}

void insere_aluno(AAluno* a,int n){
    for (int i = 0; i < n; i++)
    {
        if (a[i]==NULL)
        {
            a[i]= (AAluno)malloc(sizeof(Aluno));
            printf("Matricula: ");
            scanf("%d%*c",&a[i]->mat);
            printf("Nome: ");
            scanf("%90[^\n]",a[i]->nome);
            printf("Idade: ");
            scanf("%d%*c",&a[i]->idade);
            printf("Curso: ");
            scanf("%50[^\n]",a[i]->curso);
            printf("\n");
        }
        else
        {
            printf("Sem espaco!!");
        }
    }
    
}

void busca_aluno(AAluno* a, int matricula){
    for (int i=0;i<matricula;i++){
        if(a[i]->mat == matricula){
            printf("Aluno encontrado");
        }
        else{
            printf("Aluno nao encontrado");
        }
    }
}

void modifica_aluno(AAluno* a, int matricula){
    for(int i=0;a[i]->mat==matricula;i++){
        int mudou;
        printf("O que deseja modificar?\n");
        printf("1)Nome\n2)Idade\n3)Curso\n");
        printf("Escolha: ");
        scanf("%d",&mudou);
        switch (mudou)
        {
            case 1:
                printf("Nome: ");
                scanf("%s%*c",a[i]->nome);
                break;
            case 2:
                printf("Idade: ");
                scanf("%d%*c",&a[i]->idade);
                break;
            case 3:
                printf("Curso: ");
                scanf("%s%*c",a[i]->curso);
                break;
            default:
                break;
        }
    }
    

}

void imprime_aluno(AAluno* a,int n){
    for (int i = 0; i < n; i++)
    {
        if(a[i]!= NULL){
            printf("\nAluno %d\n-----------------------------\n",i+1);
            printf("Matricula : %d\n",a[i]->mat);
            printf("Nome: %s\n",a[i]->nome);
            printf("Idade: %d\n",a[i]->idade);
            printf("Curso: %s",a[i]->curso);
        }
    }
    
    
}

void remove_aluno(AAluno* a, int matricula){
    for (int i = 0; i < matricula; i++)
    {
        if (a[i]->mat==matricula)
        {
            free(a[i]);
            printf("Aluno removido!");
        }
        else{
            printf("Aluno nao encontrado");
        }
        
    }
    
    
}

void libera_lista(AAluno* a, int n){
    for (int i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(a);
    
}

#endif