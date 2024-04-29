
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct dados{
    int idade;
    int peso;
};

typedef struct dados Dados;

void imprimeDados(Dados **v, int numeroDados){ //** pode ser uma matriz de structs
    for (int i = 0; i < numeroDados; i++){
        printf("{%d, %d}", v[i]->idade, v[i]->peso);
        if (i != numeroDados - 1){
            printf("\t");
        }
    printf("\n");
    }
}

int compararDados(const void *a, const void *b){
    const Dados *D1 = *(const Dados **)a;
    const Dados *D2 = *(const Dados **)b;

    if (D1->idade != D2->idade){
        return(D1->idade - D2->idade); //retorna o valor de diferença casos os valores sejam diferentes 
    }else{
        return(0); //0 indica que os cvalores são iguais
    }
    
    
}

void main(){
    Dados D1 = {25, 50}; //pea o 25 e atribui ao primeiro e assim por diante
    Dados D2 = {20, 30};
    Dados D3 = {30, 40};
    Dados D4 = {20, 65};
    Dados D5 = {20, 40};
    Dados D6 = {18, 60};
    Dados D7 = {30, 45};
    Dados D8 = {18, 40};

    Dados *V[] =  {&D1, &D2, &D3, &D4, &D5, &D6, &D7, &D8}; //pegou o end. memória dos elementos 
    int numElementos = sizeof(V) / sizeof(V[0]);
    imprimeDados(V, numElementos);



    return 0;

}