#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int n,quadrado;
    printf("Digite um numero inteiro:");
    scanf("%d", &n);
    quadrado=n*n;
    printf("O Resultado é:%d", quadrado);
}
