#ifndef __TAD_PONTO_2_C__
#define __TAD_PONTO_2_C__

PPontinho cria_pontinho(float a, float b)
{
    PPontinho k = (PPontinho)malloc(sizeof(Pontinho));
    k->a = a;
    k->b = b;
    return k;
}

#endif