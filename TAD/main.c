#include <stdio.h>
#include <stdlib.h>

#include "fracao.h"

int main(){
    
    
    Fracao F = criarFracao(5, 6);
    Fracao G = criarFracao(5, 7);
    Fracao  H = criarFracao(21, 20);
    F = inverterFracao(F);
    exibirFracao(F);



    Fracao Soma = somarFracao(G, H);
    exibirFracao(Soma);


    return 0;
}