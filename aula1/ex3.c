// implementando uma função para calcular o fatorial de um número inteiro passado por parâmetro.

#include <stdio.h>

int fatorial(int num){
    int fatorial = 1;
    for (int i = 2; i < num + 1; i++){
        fatorial = fatorial * i;
    }
    return fatorial;
}

int main(){

    int num; 

    scanf("%i",&num);
    num = fatorial(num);
    printf("%i", num);

    return 0;
}

