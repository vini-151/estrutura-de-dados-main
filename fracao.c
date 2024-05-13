// Tipos anstratos de dados - TAD
#include <stdio.h>
#include <stdlib.h> 

#include "fracao.h"


typedef struct {
    int numerador;
    int denominador;
}Fracao;

// operações para manipular fração 

Fracao criarFracao (int a, int b){
    Fracao temp;
    temp.numerador = a;
    temp.denominador = b;
    return temp;
}

int mdc(int a, int b){
    while (b != 0){     //verifica até o divisor ficar nulo
        int temp = b;   //temp: divisor da divisão
        b = a % temp;   //definindo o próximo divisor
        a = temp;       //definindo o próximo dividendo 
    }

    return a;
        
}

Fracao simplificarFracao(Fracao F){
    int m = mdc(F.numerador, F.denominador);
    if (m < 0) m = -m;
    F.numerador = F.numerador / m;
    F.denominador = F.denominador / m;
    return F;
}

Fracao somarFracao (Fracao F, Fracao G){
    Fracao temp;
    temp.numerador = (F.numerador * G.denominador) + (F.denominador + G.numerador);
    temp.denominador = F.denominador * G.denominador;
    temp = simplificarFracao(temp);
    return temp; 
}

Fracao subtrairFracao (Fracao F, Fracao G){
    Fracao temp;
    temp.numerador = (F.numerador * G.denominador) - (F.denominador + G.numerador);
    temp.denominador = F.denominador * G.denominador;
    temp = simplificarFracao(temp);
    return temp; 
}

// Fracao dividirFracao (Fracao F, Fracao G){
//     return (multiplicarFracao(F, inverterFracao(G))); 
// }

Fracao multiplicarFracao(Fracao F, Fracao G){
    Fracao temp;
    temp.numerador = F.numerador * G.numerador;
    temp.denominador = F.denominador * G.denominador;
    temp = simplificarFracao(temp);
    return temp; }

Fracao inverterFracao(Fracao F){
    int temp = F.denominador;
    F.denominador = F.numerador;
    F.numerador = temp;
    return F;
}

void exibirFracao(Fracao F){
    printf("%d/%d\n", F.numerador, F.denominador);
}
