#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "portuguese");
    int n1,n2;
    printf("Digite o Primeiro N�mero:");
    scanf("%d", &n1);
    printf("Digite o Segundo N�mero:");
    scanf("%d", &n2);
    if(n1%n2==0)
        printf("O valor %d � multiplo de %d", n1,n2);
    else
        printf("O valor %d N�o � multiplo de %d", n1,n2);
}
