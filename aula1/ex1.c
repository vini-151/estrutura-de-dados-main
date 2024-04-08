#include <stdio.h>
#include <stdlib.h>

int area(int lado);


int main(){
    int valor = area(5);
    printf("%i", valor);

    return 0;
}

int area (int lado){
    if(lado == 2 || lado == 3 || lado == 4 || lado == 5) return (lado * lado);
}
