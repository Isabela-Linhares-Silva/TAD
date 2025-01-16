#ifndef __TAD_PONTO_C__
    #define __TAD_PONTO_C__
    
    PPonto cria_ponto(float x, float y){
        PPonto ponto = (PPonto)malloc(sizeof(Ponto));
        ponto->x=x;
        ponto->y=y;

        return ponto;
    }

    void libera_ponto(PPonto p){
        free(p);
    }
    void acessa_ponto(PPonto p,float *x,float *y){
        *x = p->x;//endereço onde sera armazenado o valor de x
        *y = p->y;
    }
    void atribui_ponto(PPonto p,float x,float y){
        p->x = x; // novo valor de x
        p->y = y;
    }
    float distancia_ponto(PPonto p1, PPonto p2){
        float distancia_x= p2->x - p1->x;
        float distancia_y= p2->y - p1->y;
        return sqrt(distancia_x*distancia_x + distancia_y*distancia_y);

    }
    PPonto soma_ponto(PPonto p1, PPonto p2){
        float somax= p1->x+p2->x;
        float somay= p1->y+p2->y;
        PPonto j= cria_ponto(somax,somay);
        return j;
    }

#endif