/*inclus�ao de bibliotecas*/
#include <stdio.h>
#include <locale.h>
void main(){//define a fun��o principal
    setlocale(LC_ALL,"portuguese");//inclui a biblioteca de caracteres especiais em portugues
    int n,soma=0;//declara��o das variaveis numero e da variavel soma que come�a com 0
     do{
        printf("Digite um n�mero (0 para sair): ");
        scanf("%d", &n);//leitura do numero digitado
        if (n%5==0 && n!=0)//testa se o numero � multiplo de cinco e se � diferente de zero
            soma += n;//atribui��o da soma dos numeros multiplos de cinco
    }while(n!=0);//la�o de contagem de numeros multiplos de 5 ate que o 0 seja digitado para finalizar a execu��o
    if (soma != 0) {//testa se a soma � diferente de zero
        printf("\n\nO resultado da soma dos n�meros m�ltiplos de 5 �: %d\n\n", soma);//mostra ao usuario o resultado da soma dos numeros multiplos de cinco
    } else {
        printf("\n\nNenhum n�mero m�ltiplo de 5 foi digitado!\n\n");//mostra ao usuario que nenhum numero multiplo de cinco foi digitado
    }
}
