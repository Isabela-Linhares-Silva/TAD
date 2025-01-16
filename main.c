#include <stdio.h>
#include "TAD_Circulo/TAD_Circulo.h"

int main(){

    PPonto p = cria_ponto(3,4);
    PPonto q= cria_ponto(0,0);
    CCirculo a= circ_cria(2,3,1);
    printf("PONTO 1: ");
    printf("(%.2f, %.2f)\n", p->x, p->y);
    printf("PONTO 2: ");
    printf("(%.2f, %.2f)\n\n", q->x, q->y);
    float d= distancia_ponto(p,q);
    printf("A distancia dos pontos eh: %.2f\n",d);
    PPonto l=soma_ponto(p,q);
    printf("Soma x: %.2f",l->x);
    printf("\nSoma y: %.2f",l->y);

    
    libera_ponto(p);
    libera_ponto(q);

    printf("\n\nCirculo: ");
    printf("(%.2f, %.2f,%.2f)\n\n", a->p->x, a->p->y,a->raio);
    printf("A area do circulo eh: %.2f\n",cric_area(a));
    printf("\nO ponto esta: [1]dentro/[0]fora do circulo: %d\n\n",circ_interior(a,p));

    
    /*float a,b;
    printf("DIGITE A E B: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    PPonto ponto = cria_ponto(a,b);
    printf("VALORES DE A E B, PASSADOS PARA A ESTRUTURA PONTO X E Y: \n");
    printf("x = %f\n",ponto->x);
    printf("y = %f\n",ponto->y);
    float o,p;
    acessa_ponto(ponto,&o,&p);
    printf("PASSANDO OS VALORES DA ESTRUTURA PONTO X E Y PARA O E P: \n");
    printf("o = %f\n",o);
    printf("p = %f\n",p);*/

    return 0;
}