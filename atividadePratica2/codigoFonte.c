#include <stdio.h>

typedef struct { 
    float x;
    float y;
}Ponto;

float AreaTriangulo(Ponto *A, Ponto *B, Ponto *C);

int main(){
    FILE *arquivo;
    system("cls");
   
    arquivo = fopen("vertices.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }

    int numLados; //conta quantos lados o polígono tem

    fscanf(arquivo, "%d\n", &numLados);

    Ponto p[numLados];

    if (numLados < 3) printf("Poligono incompativel. (menos que 3 lados)\n");

    else{
        printf("Calculando area de poligono de %d lados\n", numLados);
        int contVertices = 0;
        float area = 0;
        char linha[256];

        //lendo conteúdo das linhas
        while (fgets(linha, sizeof(linha), arquivo)){
            sscanf(linha, "%f %f", &p[contVertices].x, &p[contVertices].y);
            printf("vertice %i: %f \t%f\n",contVertices + 1, p[contVertices].x, p[contVertices].y);
            contVertices++;           
        }       
        if(numLados == 3){
        area = AreaTriangulo(&p[0], &p[1], &p[2]);
        printf("A area do poligono e de: %.2f", area);
        }else{
            for (int i = 1; i < numLados - 1; i++){
                float tempArea = AreaTriangulo(&p[0], &p[i], &p[i + 1]);
                area = area + tempArea;
            }
            printf("A area total do poligono e de: %.2f", area);
        }
    }

    fclose(arquivo);

    return 0;
    
}

float AreaTriangulo(Ponto *A, Ponto *B, Ponto *C){
    float matriz[3][3] = {
        {A->x, A->y, 1},
        {B->x, B->y, 1},
        {C->x, C->y, 1}
};
    float area = (matriz[0][0] * ((matriz[1][1] * matriz[2][2]) - (matriz[2][1] * matriz[1][2])) - matriz[0][1] * ((matriz[1][0] * matriz[2][2]) - (matriz[2][0] * matriz[1][2])) + matriz[0][2] * ((matriz[1][0] * matriz[2][1]) - (matriz[2][0] * matriz[1][1]))) / 2; 
    if(area < 0) area = area - area - area;

    return area;
}