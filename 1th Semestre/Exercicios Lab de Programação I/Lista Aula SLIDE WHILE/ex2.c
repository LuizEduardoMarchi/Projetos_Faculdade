#include <stdio.h>
void main(){
    float n1,n2,media;
    do{
        printf("Digite a primeira nota do aluno:");
        scanf("%f", &n1);
    }while(n1<0||n1>10);
    do{
        printf("Digite a segunda nota do aluno:");
        scanf("%f", &n2);
    } while(n2<0||n2>10);
    media=(n1+n2)/2;
    printf("A media final do aluno é:%.1f", media);
}
