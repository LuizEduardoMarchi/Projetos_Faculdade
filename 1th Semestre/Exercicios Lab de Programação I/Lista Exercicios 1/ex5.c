#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    float n1,n2,media;
    printf("Digite um numero qualquer:");
    scanf("%f", &n1);
    printf("Digite outro numero qualquer:");
    scanf("%f", &n2);
    media=(n1+n2)/2;
    printf("O Resultado é:%.2f", media);
}
