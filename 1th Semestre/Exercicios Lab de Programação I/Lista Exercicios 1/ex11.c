#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    float hr,min,seg,segf;
    printf("Digite a hora:");
    scanf("%f", &hr);
    printf("Digite os minutos:");
    scanf("%f", &min);
    printf("Digite os segundos:");
    scanf("%f", &seg);
    segf=((hr*60+min)*60+seg);
    printf("Se passaram %g segundos", segf);
}
