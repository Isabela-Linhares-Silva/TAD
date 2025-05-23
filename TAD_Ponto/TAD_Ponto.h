#include<stdlib.h>
#include<math.h>
typedef struct ponto{
    float x;
    float y;
}Ponto;
typedef Ponto * PPonto;

PPonto cria_ponto(float x,float y);
void libera_ponto(PPonto p);
void acessa_ponto(PPonto p,float* x,float* y);
void atribui_ponto(PPonto p,float x,float y);
float distancia_ponto(PPonto p1, PPonto p2);
PPonto soma_ponto(PPonto p1, PPonto p2);
#include "TAD_Ponto.c"
