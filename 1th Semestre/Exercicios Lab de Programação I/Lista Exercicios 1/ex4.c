#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    float n1,n2,soma;
    printf("Digite um numero qualquer:");
    scanf("%f", &n1);
    printf("Digite outro numero qualquer:");
    scanf("%f", &n2);
    soma=n1*n2;
    printf("O resultado é:%.2f", soma);
}
