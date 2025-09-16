#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    int i,a[8],b[8];
    for(i=0;i<8;i++){
        printf("\nDigite um numero:");
        scanf("%d", &a[i]);
    }
    for(i=0;i<8;i++){
        b[i]=a[i]*3;
    }
    for(i=0;i<8;i++){
        printf("O resultado é:%d\n\n", b[i]);
    }
}
