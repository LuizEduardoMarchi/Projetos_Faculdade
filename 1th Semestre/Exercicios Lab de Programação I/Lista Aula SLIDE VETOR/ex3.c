#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int i,a[15],b[15],c[30];
    for (i=0;i<15;i++){
        printf("Digite o %d� n�mero do vetor A: ",i+1);
        scanf("%d", &a[i]);
    }
    for (i=0;i<15;i++){
        printf("Digite o %d� n�mero do vetor B: ",i+1);
        scanf("%d", &b[i]);
    }
    for (i=0;i<15;i++) {
        c[i] = a[i];
    }
    for (i=0;i<15;i++) {
        c[i+15]=b[i];
    }
    printf("\nVetor C (30 n�meros):\n");
    for(i=0; i < 30; i++) {
        printf("%d� n�mero: %d\n",i+1,c[i]);
    }
    return 0;
}
