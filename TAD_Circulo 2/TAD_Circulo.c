#ifndef __TAD_CIRCULO_C__
    #define __TAD_CIRCULO_C__
    CCirquinho cria_cirquinho(float a,float b,float raio){
        CCirquinho s= (CCirquinho) malloc(sizeof(Cirquinho));
        s->e= cria_pontinho(a,b);
        s->r= raio;
        return s;
    }
#endif