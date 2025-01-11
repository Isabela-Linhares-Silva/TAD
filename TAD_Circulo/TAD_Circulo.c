#ifndef __TAD_Circulo_H__
    #define __TAD_Circulo_H__


    #define PI 3.144159
    CCirculo circ_cria (float x, float y, float raio){
        CCirculo c = (CCirculo) malloc(sizeof(Circulo));
        c->p = cria_ponto(x,y);
        c->raio= raio;
        return c;
        
    }

    void circ_libera(CCirculo c){
        libera_ponto(c->p);
        free(c);
    }

    float cric_area(CCirculo c){
        return PI*c->raio*c->raio;
    }

    int circ_interior(CCirculo c,PPonto p){
        float d= distancia_ponto(c->p,p);
        return(d<c->raio);// retorna 1 se for dentro do circulo e 0 se for fora;

    }
#endif
