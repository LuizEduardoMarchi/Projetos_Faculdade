#include <stdio.h>//inclusão de biblioteca
#include <locale.h>//inclusão de biblioteca
void main(){//define a classe principal do codigo
    setlocale(LC_ALL, "portuguese");//adicionar o pacote de idiomas portugues
    int a,b,c;//declaração das variaveis
    printf("Digite o Primeiro lado do triângulo:");//pede o primeiro lado do triangulo
    scanf("%d", &a);//le o primeiro lado do triangulo
    printf("Digite o Segundo numero lado do triângulo:");//pede o Segundo lado do triangulo
    scanf("%d", &b);//le o Segundo lado do triangulo
    printf("Digite o Terceiro lado do triângulo:");//pede o terceiro lado do triangulo
    scanf("%d", &c);//le o terceiro lado do triangulo
    if((a+b>c)&&(b+c>a)&&(c+a>b))//testa se forma um triangulo


        if((a==b)&&(b==c))//testa se forma um triangulo equilatero
        {
                printf("Triangulo Equilatero!");//imprime triangulo equilatero
         }
        else
             {
            if((a!=b)||(b!=c))//testa se forma um triangulo isosceles
                printf("Triangulo Isósceles!");//imprime triangulo isosceles

            else//caso nenhuma opção das duas ultimas não forem verdadeiras apenas resta triangulo escaleno
                printf("Triangulo Escaleno!");//imprime triangulo escaleno
             }
    else
        printf("Os Valores não forman um triangulo");//imprime que os valores nao formem um triangulo caso nenhuma das opções acima funcione
}
