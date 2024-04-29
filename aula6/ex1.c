// algorítmos de ordenação
// Quicksort ->Troca e partição 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 10

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particao(int array[], int inferior, int superior){
    int pivot = array[superior]; //definindo o pivot como o ultimo elemento do array 
    int i = (inferior - 1); //o indice do menor elemento 


    for (int j = inferior; j <= superior - 1; j++){
        if (array[j] <= pivot){
            i++;
            swap(&array[i], &array[j]);
        }

    }
    swap(&array[i+1], &array[superior]);
    return(i+1);
}

void quickSort(int array[], int inferior, int superior){

    if (inferior < superior){
        int p = particao(array, inferior, superior);
        quickSort(array, inferior, p - 1);
        quickSort(array, p + 1, superior);
    }
    
}

int main(){

    int v[TAMANHO];
    srand(time(NULL));
    for (int i = 0 ; i < TAMANHO; i++) v[i] = rand() % 40;
    printf("vetor original: \n");
    for (int i; i < TAMANHO; i++) printf("%d\n", v[i]);

    clock_t inicio = clock();
    quickSort(v , 0, TAMANHO - 1);
    clock_t fim = clock();

    double tempoCpu = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %lf\n\n", tempoCpu);


    return 0;

}