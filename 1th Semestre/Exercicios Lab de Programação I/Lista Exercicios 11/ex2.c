#include <stdio.h>
#include <locale.h>
#define tam 100
int main(){
    setlocale(LC_ALL,"portuguese");
    int mat[tam][tam], i, j, n, sdigp=0, sdigs=0, scol=0, slin=0;
    printf("Digite o tamanho da matriz:");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite um numero:");
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j)
                sdigp = sdigp + mat[i][j];
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i+j==n-1)

        }
    }
}
