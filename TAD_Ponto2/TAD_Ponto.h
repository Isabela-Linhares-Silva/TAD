#include <stdlib.h>
struct pontinho
{
    float a;
    float b;
};
typedef struct pontinho Pontinho;
typedef Pontinho *PPontinho;


PPontinho cria_pontinho(float a, float b);
#include "TAD_Ponto.c"