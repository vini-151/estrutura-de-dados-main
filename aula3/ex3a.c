#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Aluno{
    char matricula[5];
    int n1;
    int n2;
    int n3;
    float media;
};

void lerAluno(struct Aluno *x){ 
    fflush(stdin);
    printf("Digite o matricula do aluno (4 digitos)\n");
    fflush(stdin);
    gets(x->matricula);
    printf("Digite a primeira nota\n");
    scanf("%i", &x->n1);   
    printf("Digite a segunda nota\n");
    scanf("%i", &x->n2);
    printf("Digite a terceira nota\n");
    scanf("%i", &x->n3);
    x->media = (x->n1 + x->n2 + x->n3) / 3;
}

void buscarAluno(struct Aluno *x, char *N){
    FILE *arquivo;
    arquivo = fopen("baseDeDados.txt", "r");
    if (arquivo == NULL){
        printf("Deu ruim\n");
        exit(1);
    }
    struct Aluno *Resposta;

    while (arquivo != EOF){ //eof significa "end of file"{
        fscanf(arquivo, "%s %d %d %d %f", Resposta->matricula, Resposta->n1, Resposta->n2, Resposta->n3, Resposta->media); 
        int temp = strcmp(Resposta->matricula , N); //compara sting
        if (temp == 0){
            *x = *Resposta;
        }
        
    }
    
    
}

int main(){

    FILE *arquivo;

    arquivo = fopen("baseDeDados.txt", "a");

    if (arquivo == NULL){
        printf("Deu ruim\n");
        exit(1);
    }
    fprintf(arquivo, "matricula\t Nota 1 \t nota 2 \t nota 3 \t media\n");
    for (int i = 0; i < 4; i++){
        struct Aluno X;
// 
        lerAluno(&X);
        fprintf(arquivo, "%s \t\t %i \t\t\t %i \t\t\t %i \t\t\t %.2f\n", X.matricula, X.n1, X.n2, X.n3, X.media);
    }
    struct Aluno X;
    buscarAluno(&X, "1234");
    
    return 0; 

}
