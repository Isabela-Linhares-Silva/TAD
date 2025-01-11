#include<stdlib.h>
#include"../TAD_Ponto/TAD_Ponto.h"
typedef struct circulo{
    Ponto* p;
    float raio;
}Circulo;

typedef Circulo * CCirculo;

 CCirculo circ_cria (float x, float y, float raio);
 void circ_libera(CCirculo c);
 float cric_area(CCirculo c);
 int circ_interior(CCirculo c,PPonto p);
#include "TAD_Circulo.c"