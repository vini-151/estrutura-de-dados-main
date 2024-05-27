#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

Fila *criarFila(){
    printf("Criando fila\n");
    Fila *f = (Fila*)malloc(sizeof(Fila));
    if (f == NULL){
        fprintf(stderr, "Erro: nao foi possivel alocar memoria para fila.\n");
        exit(ERRO);
    }
    f->Inicio = NULL;
    f->Fim = NULL;
    f-> tamanho = 0;

    return f;
}

int estaVazia(Fila* f){
    return (f->Inicio == NULL);
}

void enfileirar(Fila *f, int chave){
    Item *NovoItem = (Item *)malloc(sizeof(Item));
    if (NovoItem == NULL){
        printf("Erro: nao foi possivel alocar para item.\n\n");
        exit(ERRO);
    }
    NovoItem->chave = chave;
    NovoItem->Proximo = NULL;

    if(estaVazia(f)){
        f->Inicio = NovoItem;
        f->Fim = NovoItem;
    } else {
        f->Fim->Proximo = NovoItem;
        f->Fim = NovoItem;
    }
    f->tamanho++;

}

void desenfileirar(Fila *f){

    if( estaVazia(f) ) {
        printf("erro: a fila esta vazia\n");
        exit(ERRO);
    }

    Item *temp = f->Inicio;
    int chave = temp->chave;
    f->Inicio = temp->Proximo;  //f->inicio recebe f->inicio->proximo
    free(temp);
    if(f->Inicio == NULL) f->Fim = NULL;
    f->tamanho--;

}

int somaChaves(Fila *f){
    int soma = 0;
    Item *Atual = f->Inicio;
    while (Atual != NULL){
        soma = soma + Atual->chave;
        Atual = Atual->Proximo;
    }
    
    return soma;

}
