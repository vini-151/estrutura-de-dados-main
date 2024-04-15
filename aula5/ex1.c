// Ordenação ╰(*°▽°*)╯
// métodos simples - seleção direta, inserção direta, seleção e troca - bolha
// métodos eficientes ou sofisticados - intercalação, seleção em árvore, troca e partição 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>


#define TAMANHO 400

   clock_t Inicio, Fim;

void selectionSort(int *array, int tamanho){
    int compCont = 0; //comparações
    int modCont = 0; //modificações
    
    for (int i = 0; i < tamanho; i++){ 
        int minIndex = i;

        for (int j = i + 1; j < tamanho; j++){
            compCont++;
            if (array[j] < array[minIndex]){
                minIndex = j;
                
            }
        }
        modCont = modCont + 3;
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
    
    printf("\nComparacoes: %d\natribuicoes: %d", compCont, modCont);
}

int main(){

    system("cls");
    
    int array[TAMANHO] = {3, 5, 7, 9, 2};
    
    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++){
        array[i] = rand() % 100; 
    }
    
    printf("Vetor original: \n");

    for (int i = 0; i < TAMANHO; i++){
        printf("%i\t", array[i]);
    }
    
    clock_t Inicio = clock();
    selectionSort(array, TAMANHO);
    clock_t Fim = clock();

    double tempoCPU = (double) (Fim - Inicio) / CLOCKS_PER_SEC;
    printf("\nTempo de execucao: %lf", tempoCPU);
    printf("\nVetor ordenado: \n");

    for (int i = 0; i < TAMANHO; i++){
        printf("%i\t", array[i]);
    }
    

    return 0;

}