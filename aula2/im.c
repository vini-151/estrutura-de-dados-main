#include <stdio.h>
#include <string.h>
#include <stdlib.h>


    struct Pessoa{
        char nome[1024];
        int idade;
        float altura;
        float peso;
    };
    

    float calculoImc (struct Pessoa X){
        float imc = X.peso / (X.altura * X.altura);
        return (imc);
    }

int main(){

    struct Pessoa Pessoa;
    printf("Insira o nome:\n");
    gets(Pessoa.nome);
    printf("Insira idade.\n");
    scanf("%i", &Pessoa.idade);
    printf("Insira a altura.\n");
    scanf("%f", &Pessoa.altura);
    printf("Insira o peso.\n");
    scanf("%f", &Pessoa.peso);


    printf("\n\ndados:\nNome: %s\nIdade: %i\nAltura: %.2f\nPeso:%.2f", Pessoa.nome, Pessoa.idade, Pessoa.altura, Pessoa.peso);

    float imc = calculoImc(Pessoa);

    printf("\n\nImc do individuo: %.2f", imc);

    return 0;
    
}
