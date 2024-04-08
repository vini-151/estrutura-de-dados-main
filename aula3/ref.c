#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void modificaArray(int *Array, int tamanho){
    for (int i = 0; i < tamanho; i++){
        Array[i] = Array[i] * 2;
    }

}

void imprimeVetor(int *Array, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%i\n", Array[i]);
    }
    
}


int main(){
    system("CLS");
    int meuArray[] = {0, 1, 2, 3, 4, 5};
    int tamanho = sizeof(meuArray) / sizeof(int);

    imprimeVetor(meuArray, tamanho);
    printf("%d\t%d\t%d\t%d\t%d\t%d\t", &meuArray[0], &meuArray[1], &meuArray[2], &meuArray[3], &meuArray[4], &meuArray[5]);
    modificaArray(meuArray, tamanho);
    printf("\n");
    imprimeVetor(meuArray, tamanho);

    return 0;
    
}
