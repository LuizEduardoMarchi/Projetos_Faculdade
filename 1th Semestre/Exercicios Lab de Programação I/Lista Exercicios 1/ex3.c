#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portugues");
    int n1,n2,quad;
    printf("Digite um primeiro numero qualquer:");
    scanf("%d", &n1);
    printf("Digite um segundo numero qualquer:");
    scanf("%d", &n2);
    quad=n1*n1;
    quad=(float)((n2*n2)+quad);
    printf("O Resultado é:%d", quad);

}
