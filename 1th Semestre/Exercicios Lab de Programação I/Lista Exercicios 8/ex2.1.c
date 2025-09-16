#include <stdio.h>

int main() {
    int M;
    printf("Digite o valor de M: ");
    scanf("%d", &M);

    int n;
    for (n = 1; n <= M; n++) {
        int primeiro_impar = n * n - n + 1;
        int soma = 0;
        int i;

        printf("%d³ = ", n);

        for (i = 0; i < n; i++) {
            int impar = primeiro_impar + 2 * i;
            soma += impar;
            printf("%d", impar);
            if (i < n - 1) {
                printf(" + ");
            }
        }

        printf(" = %d\n", soma);
    }

    return 0;
}
