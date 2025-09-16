#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int a[15],b[15],i;
    for(i=0;i<15;i++){
        printf("Digite o %dº numero:", i+1);
        scanf("%d", &a[i]);
        b[i]=a[i]*2;
    }
    for(i=0;i<15;i++){
        printf("O %dº resultado é:%d\n\n", i+1, b[i]);
    }
}
