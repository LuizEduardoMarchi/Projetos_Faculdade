#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int n1,n2;
    printf("Digite um numero qualquer:");
    scanf("%d", &n1);
    printf("Digite um segundo numero qualquer:");
    scanf("%d", &n2);
   if(n1==n2){
        printf("O Primeiro Numero %d � igual ao Segundo Numero %d", n1,n2);
    }else
        printf("O Primeiro Numero:%d � diferente do Segundo N�mero:%d", n1,n2);
        if(n1>n2){
            printf("\nO Primeiro Numero:%d � maior que o Segundo N�mero:%d",n1,n2);
        }else{
            printf("\nO Segundo N�mero:%d � maior que o Primeiro N�mero:%d",n2,n1);
            }
}
