#include <stdio.h> //Declara��o de biblioteca
#include <locale.h> //Declara��o de biblioteca
#define tam 4 //Declara��o do tamanho das matrizes

int main(){ //Fun��o Principal
    setlocale(LC_ALL,"portuguese"); //Inclus�o da biblioteca de caracteres especiais

    float matriz[tam][tam]; //Matriz principal
    float v[tam]; //Vetor para multiplicar a matriz
    float r[tam]; //Vetor de resultado das opera��es
    int i,j; //Variaveis contadoras para percorrer a matriz

    //La�o para a leitura dos elementos
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite um numero:");
            scanf("%f", &matriz[i][j]);
        }
    }

    //La�o para leitura dos elementos do vetor
    for(i = 0; i < tam; i++){
        printf("Digite o %d� elemento do vetor", i+1);
        scanf("%f", &v[i]);
    }

    //La�o para a multiplica��o dos elementos
    for(i = 0; i < tam; i++){
        r[i] = 0;
        for(j = 0; j < tam; j++){
            r[i] += v[j] * matriz[i][j];
        }
    }
    //La�o para mostrar os resultados
    for(i = 0; i < tam; i++){
        printf("O %d� resultado �:%.1f\n", i+1, r[i]);
    }
    printf("\n\n")
    return 0;
}
