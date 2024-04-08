#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            int resultado = i * j;
            printf("%i x %i = %i\n", i, j, resultado);
        }
        printf("\n");
    }
    
    return 0;

}