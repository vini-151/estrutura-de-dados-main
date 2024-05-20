#include <stdio.h>
#include <stdlib.h>

#ifndef FRACAO_H
#define FRACAO_H


typedef struct {
    int numerador;
    int denominador;
}Fracao;

Fracao criarFracao (int a, int b);
int mdc(int a, int b);
Fracao simplificarFracao(Fracao F);
Fracao somarFracao (Fracao F, Fracao G);
Fracao subtrairFracao (Fracao F, Fracao G);
// Fracao dividirFracao (Fracao F, Fracao G);
Fracao multiplicarFracao(Fracao F, Fracao G);
Fracao inverterFracao(Fracao F);
void exibirFracao(Fracao F);


#endif