#include <stdio.h>
#include "TAD_Ponto/TAD_Ponto.h"

int main(){

    PPonto a = cria_ponto( 2, 0);
    printf("(%.2f, %.2f)", a->x, a->y);

    free(a);
    
    return 0;
}