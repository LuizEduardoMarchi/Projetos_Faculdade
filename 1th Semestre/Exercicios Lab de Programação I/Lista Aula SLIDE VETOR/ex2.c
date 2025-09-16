#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    int a[20],b[20],c[20],i;
    for(i=0;i<20;i++){
        printf("\nDigite um numero:");
        scanf("%d", &a[i]);
        printf("\nDigite um segundo numero:");
        scanf("%d", &b[i]);
        c[i]=a[i]-b[i];
    }
    for(i=0;i<20;i++){
            printf("o resultado é:%d\n", c[i]);
    }
}
