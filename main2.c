#include<stdio.h>
#include "TAD_Circulo 2/TAD_Circulo.h"
int main(){
    PPontinho o = cria_pontinho(2,3);
    printf("%f %f\n",o->a, o->b);
    CCirquinho t= cria_cirquinho(1,2,4);
    printf("%f %f %f",t->e->a, t->e->b,t->r);
    return 0;
}