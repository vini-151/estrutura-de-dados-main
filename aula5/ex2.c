// Ordenação ╰(*°▽°*)╯
// métodos simples - seleção direta, inserção direta, seleção e troca - bolha
// métodos eficientes ou sofisticados - intercalação, seleção em árvore, troca e partição 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 30

void selectionSort(int *array, int tamanho){
    for (int i = 0; i < tamanho; i++){ 
        int minIndex = i;
        for (int j = i + 1; j < tamanho; j++){
            if (array[j] > array[minIndex]){
                minIndex = j;
            }
        }
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

int main(){
    
    int array[TAMANHO] = {3, 5, 7, 9, 2};
    
    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++){
        array[i] = rand() % 100; 
    }
    
    printf("Vetor original: \n");

    for (int i = 0; i < TAMANHO; i++){
        printf("%i\t", array[i]);
    }
    
    selectionSort(array, TAMANHO);

    printf("\nVetor ordenado: \n");

    for (int i = 0; i < TAMANHO; i++){
        printf("%i\t", array[i]);
    }
    

    return 0;

}