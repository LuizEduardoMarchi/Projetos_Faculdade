#include <stdio.h> //Declara��o da biblioteca
#include <locale.h> //Declara��o da biblioteca
#define tam 10 //Define o tamanho do vetor

int main(){ //Fun��o Principal
    setlocale(LC_ALL, "portuguese"); //Inclui a biblioteca de caracteres especiais

    int n[tam]; //Vetor de numeros
    int i; //Variavel contadora

    //La�o de leitura dos numeros
    for(i = 0; i < tam; i++){
        printf("Digite o %d� numero:", i+1);
        scanf("%d", &n[i]);
    }

    //La�o para mostrar os resultados
    for(i = tam; i > 0; i--){
        printf("Posi��o %d na ordem inversa: %d\n", i, n[i-1]);
    }
    printf("\nFIM!\n\n");
    return 0;
}
