#include <stdio.h> //Declara��o da biblioteca
#include <locale.h> //Declara��o da biblioteca
#define tam 10 //Define o tamanho do vetor

int main(){ //Fun��o Principal
    setlocale(LC_ALL, "portuguese"); //Inclui a biblioteca de caracteres especiais

    int idade[tam]; //Variavel de idades
    int menor_idade = 0, maior_idade = 0; //Variavel de menor e maior de idade
    int i; //Contador para percorrer a linha do vetor

    //La�o de leitura das idades
    for(i = 0; i < tam; i++){
        printf("Digite a %d� idade:", i+1);
        scanf("%d", &idade[i]);
    }
    //La�o de verifica��o de maior e menor de idade
    for(i = 0; i < tam; i++){
        if(idade[i] >= 18){
            maior_idade++;
        }else
            menor_idade++;
    }
    //Imprime o resultado
    printf("\nExistem %d pessoas maiores de idade!\n", maior_idade);
    printf("\nExistem %d pessoas menores de idade!\n\n", menor_idade);

    return 0;
}
