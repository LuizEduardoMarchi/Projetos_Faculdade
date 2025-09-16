#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int f;
    float c;
    printf("Digite a temperatura em fahrenheit:");
    scanf("%d", &f);
    c=(f-32)/1.8;
    printf("A temperatura %d fahrenheit em celcius é:%f\n\n", f, c);

}
