#include <stdio.h> //Declara��o de biblioteca
#include <locale.h> //Declara��o de biblioteca
#define tam 10 //Define o tamanho do vetor

int main(){ //Fun��o Principal
    setlocale(LC_ALL, "portuguese"); //Inclui a biblioteca de caracteres especiais

    int n[tam]; //Vetor N de tamanho TAM
    int i; //Variavel Contador
    int maior_n = 0; //Variavel do maior numero

    //La�o para ler numeros
    for(i = 0; i < tam; i++){
        printf("Digite o %d� numero:", i+1);
        scanf("%d", &n[i]);
    }

    //Valor do primeiro numero do vetor atribuido para o primeiro maior numero
    maior_n = n[0];

    //La�o para verificar o maior numero do vetor
    for(i = 0; i < tam; i++){
        if(n[i] > maior_n)
            maior_n = n[i];
    }
    //Imprime o resultado
    printf("\nO maior numero digitado �:%d\n\n", maior_n);

    return 0;
}
