/*inclus�ao de bibliotecas*/
#include <stdio.h>
#include <locale.h>
void main(){//define a fun��o principal
    setlocale(LC_ALL,"portuguese");//inclui a biblioteca de caracteres especiais em portugues
    int idade,idadem=0;//variaveis de idade e idade maior
    for(;idade!=0;){//la�o de leitura de idade ate que seja digitado 0 para parar a execu��o
        printf("Digite sua idade:");
        scanf("%d",&idade);//leitura da idade
        if(idade>idadem)//testa se a idade digitada � a maior idade que ja foi digitada
            idadem=idade;//atribui��o de idade maior
    }
    printf("A maior idade �:%d", idadem);//mostra ao usuario qual � a maior idade
}
