/*inclusão de bibliotecas*/
#include <stdio.h>
#include <locale.h>
void main(){//declara a função principal
    setlocale(LC_ALL, "portugese");//faz a inclusão de caracteres especiais
    /*declaração de variaveis*/
    int nota;
    printf("\nDigite a nota do aluno de 0 a 100:");
    scanf("%d", &nota);
    if(nota>100||nota<0)
        {
        printf("Nota invalida!");
        }
    else{
        switch(nota){
            case 100:
                printf("Nota A!");
            break;
            case 90:
                printf("Nota A!");
            break;
            case 80:
                printf("Nota B!");
            break;
            case 70:
                printf("Nota C!");
            break;
            case 60:
                printf("Nota D!");
            break;
            default:
                printf("F!");
          }
        }
}
