#include <stdio.h>
#include <locale.h>
#define tam 9
int main() {
    setlocale(LC_ALL, "portuguese");
    int votos[tam],codigo,i,mais_votado=0;
    printf("Digite os votos (n�meros de 0 a 9). \nN�mero negativo para encerrar:");
    do{
        scanf("%d", &codigo);
        if (codigo < 0){
            break;
        }else
            if (codigo >= 0 && codigo < tam) {
                votos[codigo]++;
            } else {
                printf("C�digo inv�lido! Voto ignorado.\n");
            }
    }while(codigo>=0);
    printf("\nResultado da vota��o:\n");
    for (i = 0; i < tam; i++) {
        if (votos[i] > 0) {
            printf("Candidato %d: %d voto%s\n", i, votos[i], votos[i] > 1 ? "s" : "");
        }
        if (votos[i] > votos[mais_votado]) {
            mais_votado = i;
        }
    }

    printf("\nO candidato %d foi eleito.\n", mais_votado);
    return 0;
}
