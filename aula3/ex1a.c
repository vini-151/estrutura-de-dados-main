// arquivos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("exemplo02.txt", "a");

    // obs: o modo "w" abre o arquivo para escrita
    // se o arquivo existir, todo seu conteúdo será perdido 
    // modo"r" abre o arquivo para leitura
    // modo "a" -> append 

    if (arquivo == NULL){
        printf("Erro ao abrir arquivo.\n"); 
        exit(1);
    }

    fclose(arquivo);
 

    return 0;
}
