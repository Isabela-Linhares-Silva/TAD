#include<stdlib.h>
typedef struct paciente
{
    int id;
    char nome[100];
    int idade;
    int prioridade;
}Paciente;
typedef Paciente * PPaciente;

PPaciente cria_paciente (PPaciente p,int n);
void libera_paciente(PPaciente p,int n);





















#include "TAD_Paciente.c"