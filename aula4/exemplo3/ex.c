#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 

#define TAMANHO 50

int main(){

    FILE *fp;

    system("cls");
    int vetor[TAMANHO];

    srand(time(NULL));

    fp = fopen("numeros.csv", "w");

    if(fp == NULL){
        printf("erro");
    }

    for (int i = 0; i < TAMANHO; i++){
        vetor[i] = rand();
    }

    for (int i = 0; i < TAMANHO; i++){
        fprintf(fp, "%i\n", vetor[i]);
    }
    
    
    return 0;

}