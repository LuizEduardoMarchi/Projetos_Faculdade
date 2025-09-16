#include <stdio.h> //Declara��o de Biblioteca
#include <locale.h> //Declara��o da biblioteca
#define tam 10 //Define o tamanho do vetor

int main(){ //Fun��o Principal
    setlocale(LC_ALL, "portuguese"); //Inclui a biblioteca de caracteres especiais

    float peso[tam],menor_peso;//Variavel peso e menor peso
    int i;//Variavel contadora

    //La�o de leitura dos pesos
    for(i = 0; i < tam; i++){
        printf("Digite o %d� peso:", i+1);
        scanf("%f", &peso[i]);//Leitura dos pesos
    }

    menor_peso = peso[0];//Menor peso recebe o primeiro valor digitado para iniciar a contagem

    //Verifica qual � o menor peso digitado
    for(i = 0; i < tam; i++){
        if(peso[i] < menor_peso)
            menor_peso = peso[i];
    }
    //Imprime o resultado
    printf("\nO menor peso digitado foi:%.2f\n\n", menor_peso);
    return 0;
}
