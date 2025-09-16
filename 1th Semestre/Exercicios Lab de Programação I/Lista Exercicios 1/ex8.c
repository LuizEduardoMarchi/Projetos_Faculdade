#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int c;
    float f;
    printf("Digite a temperatura em Celcius:");
    scanf("%d", &c);
    f=c*1.8+32;
    printf("A temperatura %d celcius em fahrenheit é:%f\n\n", c, f);

}
