#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int n1,n2,n3;
    float media;
    printf("Digite a primeira nota do aluno:");
    scanf("%d", &n1);
    printf("Digite a segunda nota do aluno:");
    scanf("%d", &n2);
    printf("Digite a terceira nota do aluno:");
    scanf("%d", &n3);
    media=(n1*2+n2*3+n3*5)/3;
    printf("A media final do aluno é:%f", media);
}
