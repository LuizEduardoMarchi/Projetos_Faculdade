#include <stdio.h>//inclusão de bibliotecas
#include <locale.h>
void main(){//inclusão da função principal main
    setlocale(LC_ALL, "portuguese");//adiciona o pacote de caracteres especiais
    /*declaração de variaveis*/
    char op;
    int cont;
    float n1,n2,res;
    printf("\nCalculadora simples!");
    printf("\nDigite o primeiro numero:");
    scanf("%f", &n1);//faz a leitura do primeiro numero
    printf("\nDigite a operação a ser feita:");
    scanf(" %c", &op);//faz a leitura da operação a ser feita
    printf("\nDigite o segundo numero:");
    scanf("%f", &n2);//faz a leitura do segundo numero
    switch (op){//seleciona o tipo de operação a ser feita
        case '+':
            res=n1+n2;//faz a adição
        break;
        case '-':
            res=n1-n2;//faz a subtração
        break;
        case '*':
            res=n1*n2;//faz a multiplicação
        break;
        case '/':
            if(res==0)//testa se a divisão é valida
                printf("Operação invalida!");
            else
                res=n1/n2;//faz a divisão
        break;
        default:
            printf("operação invalida!");//mostra se o tipo de operação é invalida
            cont=1;//caso seja invalido cont recebe o valor de 1
    }
    if(cont!=1)//testa se cont é diferente de 1
        printf("O resultado da operação é:%.2f", res);//mostra o resultado caso algumas das operações sejam verdadeiros
}
