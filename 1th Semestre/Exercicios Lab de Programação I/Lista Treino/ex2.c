#include <stdio.h>//inclus�o de bibliotecas
#include <locale.h>
void main(){//inclus�o da fun��o principal main
    setlocale(LC_ALL, "portuguese");//adiciona o pacote de caracteres especiais
    /*declara��o de variaveis*/
    char op;
    int cont;
    float n1,n2,res;
    printf("\nCalculadora simples!");
    printf("\nDigite o primeiro numero:");
    scanf("%f", &n1);//faz a leitura do primeiro numero
    printf("\nDigite a opera��o a ser feita:");
    scanf(" %c", &op);//faz a leitura da opera��o a ser feita
    printf("\nDigite o segundo numero:");
    scanf("%f", &n2);//faz a leitura do segundo numero
    switch (op){//seleciona o tipo de opera��o a ser feita
        case '+':
            res=n1+n2;//faz a adi��o
        break;
        case '-':
            res=n1-n2;//faz a subtra��o
        break;
        case '*':
            res=n1*n2;//faz a multiplica��o
        break;
        case '/':
            if(res==0)//testa se a divis�o � valida
                printf("Opera��o invalida!");
            else
                res=n1/n2;//faz a divis�o
        break;
        default:
            printf("opera��o invalida!");//mostra se o tipo de opera��o � invalida
            cont=1;//caso seja invalido cont recebe o valor de 1
    }
    if(cont!=1)//testa se cont � diferente de 1
        printf("O resultado da opera��o �:%.2f", res);//mostra o resultado caso algumas das opera��es sejam verdadeiros
}
