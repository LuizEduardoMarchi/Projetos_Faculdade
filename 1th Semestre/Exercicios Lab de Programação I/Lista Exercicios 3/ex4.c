#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "Portuguese");
    int n1,n2;
    printf("Digite o primeiro n�mero:");
    scanf("%f", &n1);
    printf("Digite o Segundo N�mero:");
    scanf("%f", &n2);
    if(n2==n1)
        printf("Numeros Iguais");
    else
        printf("Os numeros sao diferentes");
}
