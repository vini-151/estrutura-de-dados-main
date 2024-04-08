#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include <sys/time.h>

#define TAMANHO 50000

int main(){

    struct timeval Start, End;

    double tempoCPU;

    system("cls");
    int vetor[TAMANHO];

    srand(time(NULL));

    gettimeofday(&Start, NULL);

    for (int i = 0; i < TAMANHO; i++){
        vetor[i] = rand();
    }

    for (int i = 0; i < TAMANHO; i++){
        printf( "%i\n", vetor[i]);
    }

    gettimeofday(&End, NULL);

    tempoCPU = (End.tv_sec - Start.tv_sec) + (End.tv_usec - Start.tv_usec) / 1000000;

    printf("Tempo de execucao: %lf\n", tempoCPU);
    
    return 0;



}