#include <stdio.h>
void main(){
    int seg;
    float hr,min;
    printf("Digite o valor em segundos:");
    scanf("%d", &seg);
    min=(float)seg/60;
    printf("\nO valor %d em minutos �:%.1f\n", seg, min);
    hr=min/60;
    printf("\nO valor %d em horas �:%.1f\n", seg, hr);
    printf("\nO valor %d em segundos �:%d\n\n", seg, seg);
}
