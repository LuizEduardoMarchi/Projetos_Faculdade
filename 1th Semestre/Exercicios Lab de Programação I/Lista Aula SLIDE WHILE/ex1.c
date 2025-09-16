#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "portuguese");
    int n1,n2,cont;
    float result;
    printf("Digite um numero:");
    scanf("%d", &n1);
    printf("Digite um segundo numero:");
    scanf("%d", &n2);
    while(n2==0){
            printf("Digite um segundo numero diferente de zero:");
            scanf("%d", &n2);
    }
    result=n1/n2;
    printf("A media dos numeros é:%.0f", result);
}
