#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    float vpg,vtx;
    printf("Digite o valor total da conta:");
    scanf("%f", &vpg);
    vtx=vpg*1.10;
    printf("O valor com a taxa do garçon é:%.2f", vtx);
}

