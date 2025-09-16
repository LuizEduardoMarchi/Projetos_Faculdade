/*inclus�o de bibliotecas*/
#include <stdio.h>
#include <locale.h>

void main(){//Fun��o Principal
    setlocale(LC_ALL, "portuguese");//inclus�o da fun��o de caracteres especiais
    /*inclus�o de variaveis*/
    int op,cont=0, fim;
    float n1,n2,res;

    do{
        printf("\n0 � Sair \n1 � Adi��o \n2 � Subtra��o \n3 � Multiplica��o \n4 � Divis�o \n5 � Potencia��o \nTipo de opera��o:");
        scanf("%d", &op);//leitura do tipo de opera��o
        if(op>=1&&op<=5){//testa se o valor � diferente de zero e diferente de cinco
                if(op!=5)//testa se opera��o � diferente de cinco(caso seja sera requisitado ao usuario o primeiro valor e o valor a ser elevado dentro da estrutura case 5)
                    {
                    printf("\nDigite o primeiro n�mero:");
                    scanf("%f", &n1);//Leitura do primeiro numero
                    printf("\nDigite o segundo n�mero:");
                    scanf("%f", &n2);//Leitura do segundo numero
                    }
            switch (op){//seleciona o tipo de opera��o e faz o calculo
                case 1:
                    res=n1+n2;//Soma o primeiro numero com o segundo
                    printf("\nO resultado entre %.2f + %.2f = %.2f\n",n1,n2, res);//exibe o resultado na tela do usuario
                break;
                case 2:
                    res=n1-n2;//Subtrai o primeiro numero com o segundo
                    printf("\nO resultado entre %.2f - %.2f = %.2f\n",n1,n2, res);//exibe o resultado na tela do usuario
                break;
                case 3:
                    res=n1*n2;//Multiplica o primeiro numero com o segundo
                    printf("\nO resultado entre %.2f * %.2f = %.2f\n",n1,n2, res);//exibe o resultado na tela do usuario
                break;
                case 4:
                    while(n2==0){//Testa o segundo numero at� que seja diferente de zero
                        printf("Numero de divisor invalido, Digite um numero maior que zero:");
                        scanf("%f", &n2);
                    }
                    res=n1/n2;
                    printf("\nO resultado entre %.2f / %.2f = %.2f\n",n1,n2, res);//exibe o resultado na tela do usuario
                break;
                case 5:
                    printf("\nDigite um n�mero:");
                    scanf("%f", &n1);//faz a leitura do primeiro numero
                    printf("\nDigite o numero a ser elevado:");
                    scanf("%f", &n2);//faz a leitura do numero a ser elevado
                    res=1;
                    cont=1;
                    while(cont<=n2){//Faz a repeti��o do calculo at� que o resultado seja atingido
                        res = res * n1;
                        cont++;
                    }
                    printf("\nO resultado entre %.2f ^ %.2f = %.2f\n",n1,n2,res);//exibe o resultado na tela do usuario
                break;
            }
        }else
        if(op!=0){//testa se opera��o � diferente de zero(terminar opera��o) caso nenhuma das op��es validas sejam digitadas
            printf("\nOpera��o Invalida!\n");//exibe na tela opera��o invalida caso nenhuma das op��es validas sejam digitadas
        }
        if(op==0)//testa se o usuario deseja finalizar a opera��o
            printf("\nOpera��o Finalizada!\n\n");//mostra opera��o finalizada na tela do usuario
    }while(op!=0);//executa o la�o at� que o tipo de opera��o seja igual a zero
}
