#include <stdio.h>
void main(){
    int seg;
    float hr,min;
    printf("Digite o valor em segundos:");
    scanf("%d", &seg);
    min=(float)seg/60;
    printf("\nO valor %d em minutos é:%.1f\n", seg, min);
    hr=min/60;
    printf("\nO valor %d em horas é:%.1f\n", seg, hr);
    printf("\nO valor %d em segundos é:%d\n\n", seg, seg);
}
