#ifndef FILA_H

#define FILA_H

#define ERRO 1

typedef struct Item{ 
    int chave;
    struct Item *Proximo;
} Item;

typedef struct Fila{ 
    int tamanho;
    Item *Inicio;
    Item *Fim;
} Fila;

Fila *criarFila();

int estaVazia(Fila *f);

void enfileirar(Fila *f, int chave);

void desenfileirar(Fila *f);

int somaChaves(Fila *f);

#endif