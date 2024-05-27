#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

int main(){

    printf("teste n1: Criando uma fila vazia\n");
    Fila *MinhaFila = criarFila();
    printf("tamanho da fila criada: %d.\n\n", MinhaFila->tamanho);

    printf("Teste n2: Inserindo elementos na fila.\n");
    enfileirar(MinhaFila, 10);
    enfileirar(MinhaFila, 20);
    enfileirar(MinhaFila, 30);
    enfileirar(MinhaFila, 90);

    printf("tamanho da fila: %d\n\n", MinhaFila->tamanho);

    printf("Teste n3: exibindo o ultimo elemento da fila.\n");
    printf("%d\n\n", MinhaFila->Fim->chave);

    printf("Teste n4: desenfileirando o primeiro elemento da fila\n");
    desenfileirar(MinhaFila);
    printf("tamanho da fila: %d\n\n", MinhaFila->tamanho);

    printf("teste n5: exibindo primeiro elemento da fila.\n");
    printf("%d\n\n", MinhaFila->Inicio->chave);    
    
    printf("Teste n6: Somando elementos da fila.\n");
    int soma = somaChaves(MinhaFila);
    printf("%d", soma);

    return 0;

}