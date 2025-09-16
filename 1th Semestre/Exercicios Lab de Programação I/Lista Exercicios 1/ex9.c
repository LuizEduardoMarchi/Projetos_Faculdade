#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    float area,raio;
    printf("Digite o raio do circulo:");
    scanf("%f", &raio);
    area=(raio*raio)*3.14;
    printf("A area do circulo é:%.2f", area);
}
