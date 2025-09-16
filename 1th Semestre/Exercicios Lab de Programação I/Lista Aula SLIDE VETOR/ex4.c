#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int i,n[15],cont=0;
    for(i=0;i<15;i++){
        printf("Digite %dº numero:", i+1);
        scanf("%d", &n[i]);
        if(n[i]==10){
            cont++;
        }
    }
    printf("O numero 10 apareceu %d vezes!!\n\n", cont);
    return 0;
}
