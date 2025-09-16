#include <stdio.h> //Declara��o de biblioteca
#include <locale.h> //Declara��o de biblioteca
#define tam 3 //Define o tamanho da matriz 3x3

int main(){ //Fun��o Principal
    setlocale(LC_ALL, "portuguese"); //Inclus�o de biblioteca de caracteres especiais

    float a[tam][tam]; //Matriz A 3x3
    float b[tam][tam]; //Matriz B 3x3
    float p[tam][tam]; //Matriz P para produto das matrizes AxB;
    int i,j,k; //Variaveis contadoras

    //La�o de leitura da Matriz A
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite o %d numero:", j+1);
            scanf("%f", &a[i][j]);
        }
    }

    //La�o de leitura da Matriz B
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite o %d numero:", j+1);
            scanf("%f", &b[i][j]);
        }
    }

    //La�o de calculo do produto entre Matriz A x Matriz B
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            p[i][j] = 0;
            for(k = 0; k < tam; k++) {
                p[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    //La�o de exibi��o dos resultados
    printf("\nO resultado do produto entre matrizes �:\n\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%.1f  ",p[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
