#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int pot,larg,comp, lamp;
    float area;
    printf("Digite a potencia da lampada a ser usada:");
    scanf("%d", &pot);
    printf("Digite a largura do comodo:");
    scanf("%d", &larg);
    printf("Digite o comprimento do comodo:");
    scanf("%d", &comp);
    lamp=((larg*comp)*20)/pot;
    printf("A quantidade de lampadas necessarias é:%d", lamp);
}
