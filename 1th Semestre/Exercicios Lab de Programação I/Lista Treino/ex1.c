#include <stdio.h>//inclus�o de biblioteca
#include <locale.h>//inclus�o de biblioteca
void main(){//define a classe principal do codigo
    setlocale(LC_ALL, "portuguese");//adicionar o pacote de idiomas portugues
    int a,b,c;//declara��o das variaveis
    printf("Digite o Primeiro lado do tri�ngulo:");//pede o primeiro lado do triangulo
    scanf("%d", &a);//le o primeiro lado do triangulo
    printf("Digite o Segundo numero lado do tri�ngulo:");//pede o Segundo lado do triangulo
    scanf("%d", &b);//le o Segundo lado do triangulo
    printf("Digite o Terceiro lado do tri�ngulo:");//pede o terceiro lado do triangulo
    scanf("%d", &c);//le o terceiro lado do triangulo
    if((a+b>c)&&(b+c>a)&&(c+a>b))//testa se forma um triangulo


        if((a==b)&&(b==c))//testa se forma um triangulo equilatero
        {
                printf("Triangulo Equilatero!");//imprime triangulo equilatero
         }
        else
             {
            if((a!=b)||(b!=c))//testa se forma um triangulo isosceles
                printf("Triangulo Is�sceles!");//imprime triangulo isosceles

            else//caso nenhuma op��o das duas ultimas n�o forem verdadeiras apenas resta triangulo escaleno
                printf("Triangulo Escaleno!");//imprime triangulo escaleno
             }
    else
        printf("Os Valores n�o forman um triangulo");//imprime que os valores nao formem um triangulo caso nenhuma das op��es acima funcione
}
