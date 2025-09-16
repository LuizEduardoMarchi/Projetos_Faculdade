#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int i,a[15],b[15],c[30];
    for (i=0;i<15;i++){
        printf("Digite o %dº número do vetor A: ",i+1);
        scanf("%d", &a[i]);
    }
    for (i=0;i<15;i++){
        printf("Digite o %dº número do vetor B: ",i+1);
        scanf("%d", &b[i]);
    }
    for (i=0;i<15;i++) {
        c[i] = a[i];
    }
    for (i=0;i<15;i++) {
        c[i+15]=b[i];
    }
    printf("\nVetor C (30 números):\n");
    for(i=0; i < 30; i++) {
        printf("%dº número: %d\n",i+1,c[i]);
    }
    return 0;
}
