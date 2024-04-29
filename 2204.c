// #include <stdio.h>
// struct Veiculo { 
//     int Ano; 
//     float Preco;
//     char Fabricante[20];
//     char Modelo[20];
// };


// int main(){
//     int tam = sizeof(struct Veiculo);
//     printf("%i", tam);
// }






// prox







// #include <stdio.h>

// int main(){

//     int x, x1, y, y1, z ,z1;
//     x1 = 40;
//     y1 = 10 - 3;
//     z1 = 34 - 10;

//     while (x1 > 30){
//         x = x1 - y1;
//         y = y1 + z1;
//         z = z1 + x1;
//         x1 = x;
//         y1 = y;
//         z1 = z;
//     }

//     printf("%i", y1);
    
// }

// prox

// #include <stdio.h>

// int main(){ 

// int i = 1;
 
// if (i == 1){
//     printf("s");
// }

// }


// prox


// #include <stdio.h>

// int main(){

//     int r;


//     int a = 0;  
//     int b = 5; 

//     do{
//         r = a % b;
//         a = b;
//         b = r;
//     } while (b != 0);

//     printf("%i\n", a);

//     a = 4;
//     b = 4;

//     do{
//         r = a % b;
//         a = b;
//         b = r;
//     } while (b != 0);

//     printf("%i\n", a);
    
//     a = 0;
//     b = 5;

//     do{
//         r = a % b;
//         a = b;
//         b = r;
//     } while (b != 0);

//     printf("%i\n", a);
    
//     a = 12;
//     b = 8;
    
//     do{
//         r = a % b;
//         a = b;
//         b = r;
//     } while (b != 0);

//     printf("%i\n", a);
    
// }




// prox





// #include <stdio.h>

// typedef struct Pessoa { 
//     char nome[1024];
//     int idade;
//     float altura;
//     float peso;
// };

// float calcularIMC(struct Pessoa *X){
//     X->peso = 8;
//     X->altura = 2;

//     float IMC = X->peso / (X->altura * X->altura);

//     printf("%f\n", IMC);

//     return(IMC);
// }

// int main(){

//     struct Pessoa a;

//     float imc = calcularIMC(&a);

//     printf("%f", imc);

// }







// prox






// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(){
//     const int nulo = NULL;
//     FILE *arquivo;
//     char *nome = "arquivo.txt";
//     char *modo = "a";
//     arquivo = fopen(nome, modo);
//     if (arquivo == nulo){
//         printf("Erro ao abrir arquivo.\n");
//         exit(1);
//     }
//     fclose(arquivo);
//     printf("%d", nome);
//     return 0;
    
// }





// prox





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    FILE *arquivo;
    char linha[100];
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }
    while (fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;
    
}
