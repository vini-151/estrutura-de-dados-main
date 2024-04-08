//média de 3 valores passados como parâmetros (Q03)

#include <stdio.h>

float mediaAritmetica(float num1, float num2, float num3);

int main(){
    float n1, n2, n3;
    float media;

    scanf("%f %f %f", &n1, &n2, &n3);
    media = mediaAritmetica(n1, n2, n3);
    printf("%.2f", media);

    return 0;
}

float mediaAritmetica(float num1, float num2, float num3){
    float media = (num1 + num2 + num3) / 3;
    return media;
}