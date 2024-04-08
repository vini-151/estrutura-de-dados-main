#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    system("cls");

    FILE *fp;
    fp = fopen("tabela.html", "w");

    if (fp == NULL){
        printf("Erro na execucao - Arquivo nao pode ser aberto.\n");
        exit(1);
    }

    printf("Digite um valor inteiro:\n");
    int n;
    scanf("%i", &n);
    int *vetor = malloc(n * sizeof(int));
    

    for (int i = 0; i < n; i++){
        printf("Digite o numero %d : \n", i + 1);
        scanf("%i", &vetor[i]);
    }

    // gerando a tabela
    fprintf(fp, "<!DOCTYPE html> <html lang=\"en\"> <head>  \n   <meta charset=\"UTF-8\">   \n  <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">  \n   <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">  \n   <title>Minha querida tabela</title> <link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH\" crossorigin=\"anonymous\">  \n   <style>         body{             background-color: #F0F0F0;   font-size: large;      }     </style> </head> <body> \n <h1 class=\"container text-center px-1\">Minha querida tabela</h1>\n");

    fprintf(fp, "<div class=\"container text-center px-1\"> <table border = \"1\">\n");

    for (int i = 0; i < n; i++){
        fprintf(fp, "<tr>\n");
        fprintf(fp, "<td> %d </td>\n", i + 1);
        fprintf(fp, "<td> %d </td>\n", vetor[i]);
        fprintf(fp, "</tr>\n");
    }
    
    fprintf(fp, "</table>\n</div");
    
    return 0;

}