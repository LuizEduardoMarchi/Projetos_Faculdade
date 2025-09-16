#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n,dobro;
    printf("Digite um numero qualquer:");
    scanf("%d", &n);
    dobro=n*2;
    printf("O Dobro do numero %d é:%d", n, dobro);
}
