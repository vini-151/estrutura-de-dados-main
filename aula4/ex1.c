#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Produtos{
    char item[50];
    int quantidade;
    float preco;
};

int main(){

    FILE *fp;

    fp = fopen("listadecompras.txt", "r");

    if (fp != NULL){
        struct Produtos X;
        float total = 0;
        int i = 0;
        printf("\n");
        while (fscanf(fp, "%s %d %f", X.item, &X.quantidade, &X.preco) != EOF){
            float subtotal = X.quantidade * X.preco;
            total = total + subtotal;
            i++;
            printf("%i ) ", i);
            printf("%s : ", X.item);
            printf("%d * %.2f = ", X.quantidade, X.preco);
            printf("R$%.2f\n", subtotal);
        }
        printf("Valor total = %.2f\n", total);
        }else{
        printf("Erro na execucao - Arquivo nao pode ser aberto.\n");
        exit(1);
    }
    
    return 0;

}