// arquivos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arquivo;
    int numero = 123;
    char palavra [] = "tome";

    arquivo = fopen("saida.txt", "w");

    if (arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }

    fprintf(arquivo, "numero: %d Palavra: %s\n", numero, palavra);

    fclose(arquivo);
 
    return 0;
}
