#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    float v_pg,latas,comp,larg;
    printf("Digite a largura da area a ser pintada:");
    scanf("%f", &larg);
    printf("Digite o comprimento:");
    scanf("%f", &comp);
    latas=(((larg*comp)/13.0)/3.6);
    v_pg=latas*25;
    printf("São necessarias %.1f latas de tinta e o valor a pagar será de:%.2f", latas, v_pg);
}
