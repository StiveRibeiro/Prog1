#include <stdio.h>


int main() {
    int notaP1;
    int notaP2;

    printf("Calculo de media\n\n");
    printf("Nota P1: ");
    scanf("%d", &notaP1);
    printf("Nota P2: ");
    scanf("%d", &notaP2);

    float soma = notaP1 + notaP2;
    float media = soma / 2;
    printf("A sua media eh: %f\n\n", media);
        if(media>7) {
            printf("Voce passou irmao parabens\n");
        }
        else if (media>4) {
            printf("Se vira pra estudar pra esse exame mermao\n");
        }
        else {
            printf("TU PEGOU DP KKKKKKKKKK\n");
        }


}

