#include <stdio.h> //biblioteca de calculos
#include <locale.h> //Biblioteca de idiomas
void main (){ //fun��o principal
    setlocale(LC_ALL, "portuguese"); //inclui caracteres especiais
    int n,cont; //declara��o de variaveis n=numero cont=contador
    cont=0; //declara o valor zero para a variavel cont
    do{//Inicio da estrutura de repeti��o
        printf("\nDigite um numero qualquer:"); //pede ao usuario um numero qualquer
        scanf("%d", &n);//L� o numero digitado pelo usuario
        if(n%3==0){ //testa se o numero digitado � divisivel por 3
            printf("O Numero %d  � divisvel por 3",n); //Exibe a mensagem com o numero digitado se for divisivel por 3
        }else
            printf("O Numero %d  N�o � divisvel por 3",n); //Exibe a mensagem com o numero digitado se ele nao for divisivel por 3
        cont++;//contador recebe 1 numero a mais a cada repeti��o do programa
    }while(cont<=10);//finaliza a estrutura de repeti��o
}
