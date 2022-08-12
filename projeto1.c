#include <stdio.h>


int main() {
    //primeiramente estabelecendo as notas
    float notaP1;
    float notaP2;

    //interface pede as notas do aluno, podendo ser em decimal
    printf("Calculo de media\n\n");
    printf("Nota P1: ");
    scanf("%f", &notaP1);
    printf("Nota P2: ");
    scanf("%f", &notaP2);

    //eh feita a soma e a divisao das notas e, conforme a media final, eh dito se o aluno passou, pegou exame ou pegou dp
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

