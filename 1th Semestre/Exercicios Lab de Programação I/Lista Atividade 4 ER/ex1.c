/*inclus�ao de bibliotecas*/
#include <stdio.h>
#include <locale.h>
void main(){//define a fun��o principal
    setlocale(LC_ALL,"portuguese");//inclui a biblioteca de caracteres especiais em portugues
    /*Declara��o de variaveis como contador, altura maior e altura*/
    int cont,altura_m=0;
    float altura;

    for(cont=1; cont<= 10;cont++){//la�o de leitura da altura de 10 pessoas
        printf("\nDigite sua altura em metros (ex: 1,75): ");
        scanf("%f", &altura);//leitura da altura
        if(altura>1.80)//testa se a altura digitada � maior que 1,80
            altura_m++;//atribui��o da quantidade de pessoas maiores que 1,80m de altura
    }
    if(altura_m==0){//testa se existe alguem com altura maior que 1,80
        printf("\nN�o tem ningu�m maior que 1,80m!\n\n");//mostra que n�o h� pessoas com mais de 1,80
    }else
        printf("\n%d pessoa(s) s�o maiores que 1,80m!\n\n", altura_m);//mostra que h� pessoas com mais de 1,80
}
