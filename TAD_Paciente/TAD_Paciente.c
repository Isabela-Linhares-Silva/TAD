#ifndef __TAD_PACIENTE_C__
    #define __TAD_PACIENTE_C__

    PPaciente cria_paciente (PPaciente p,int n){
        PPaciente p =(PPaciente)malloc(n*sizeof(Paciente));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&p.id[i]);
            scanf("%s", p.nome[i]);
            scanf("%d",&p.idade[i]);
            scanf("%d",&p.prioridade[i]);
        }
    }
    void libera_paciente(PPaciente p,int n){
        for(int i=0;i<n;i++)
        {
            free(p->id[i]);
            free(p->nome[i]);
            free(p->idade[i]);
            free(p->prioridade[i]);
        }
        free(p);
    }
#endif