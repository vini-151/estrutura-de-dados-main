#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include <windows.h>

#define TAMANHO 50000

int main(){

    LARGE_INTEGER frequencia;
    LARGE_INTEGER t1, t2;
    float tempoCPU;
    QueryPerformanceFrequency(&frequencia);

    system("cls");
    int vetor[TAMANHO];

    srand(time(NULL));

    QueryPerformanceCounter(&t1);

    for (int i = 0; i < TAMANHO; i++){
        vetor[i] = rand();
    }

    for (int i = 0; i < TAMANHO; i++){
        printf( "%i\n", vetor[i]);
    }

    QueryPerformanceCounter(&t2);

    tempoCPU = (t2.QuadPart - t1.QuadPart) * 1.0 / frequencia.QuadPart;

    printf("Tempo de execucao: %f\n", tempoCPU);
    
    return 0;

#f0f0f0

}