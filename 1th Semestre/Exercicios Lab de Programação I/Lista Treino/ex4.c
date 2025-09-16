#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int idade,dia,cont;
    float v_pg;
    cont==0;
    printf("\nDigite sua idade:");
    scanf("%d", &idade);
    printf("Digite 1- para dias da semana e digite 2- Para final de semana:");
    if(idade<0){
        printf("\nIdade invalida!");
    }else
        if(idade>=0&&idade<=6)
            {
            printf("\nPassagem Gratuita!");
            }
        else
            if(idade>6&&idade<=18)
                {
                    printf("\nMeia Passagem!");
                }
            else
                if(idade>=19&&idade<=59)
            {
                printf("\nPassagem Inteira!");
            }
                else{
                    printf("\nPassagem Gratuita!");
                }
    if(idade>=0&&idade<=6&&idade>=60){
        printf("Nenhum valor a pagar!");
    }else{
    switch(dia){
    case 1:
        v_pg=200;
        cont==1;
    break;
    case 2:
        v_pg=200*0.75;
        cont==1;
    break;
    default:
        printf("Tipo de passagem incorreto!");
        cont=0;
    }
    }
    if(cont!=0)
        printf("O valor da passagem é:%f",v_pg);
}
