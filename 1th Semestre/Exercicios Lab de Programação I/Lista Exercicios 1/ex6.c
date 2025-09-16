#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    float n1,n2,n3,soma,media;
    printf("Digite um primeiro numero qualquer:");
    scanf("%f", &n1);
    printf("Digite um segundo numero qualquer:");
    scanf("%f", &n2);
    printf("Digite um terceiro numero qualquer:");
    scanf("%f", &n3);
    soma=(n1+n2+n3);
    media=soma/3;
    printf("A soma de todos os valores é:%.2f", soma);
    printf("A media de todos os valores é:%.2f", media);
}
