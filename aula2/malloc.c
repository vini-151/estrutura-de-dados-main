#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *criarArray(int tamanho){
    int *array = malloc(tamanho*sizeof(int));
    for (size_t i = 0; i < tamanho; i++) array[i] = (7 * i + 1 ) % 6;
    return array;
}



int main(){
    system("cls");
    int t;

    printf("insira uma quantidade.\n");
    scanf("%i", &t);

    int *meuArray = criarArray(t);

    for(int i = 0; i < t; i++) printf("%i\t", meuArray[i]);
    printf("\n");

    return 0;

}
