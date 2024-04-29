
#include <stdio.h>
#include <stdlib.h>

int main(){
    const int nulo = NULL;
    FILE *arquivo;
    char *nome = "arquivo.txt";
    char *modo = "a";
    arquivo = fopen(nome, modo);
    if (arquivo == nulo){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }
    fclose(arquivo);
    printf("%d", nome);
    return 0;
    
}
