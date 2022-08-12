#include <stdio.h>
//eu editei esse codigo quando vi que podia guardar funcoes pra depois, creio que isso ainda vai ser aperfeicoado, e/ou vou adicionar mais coisas aqui, mas por enquanto eh so

void notas() {                                     //guardando a funcao pra depois
    float notaP1;                                  //primeiramente estabelecendo as notas
    float notaP2;

    printf("Calculo de media\n\n");                //interface pede as notas do aluno, podendo ser em decimal
    printf("Nota P1: ");
    scanf("%f", &notaP1);
    printf("Nota P2: ");
    scanf("%f", &notaP2);

    float soma = notaP1 + notaP2;                  //eh feita a soma e a divisao das notas e, conforme a media final, eh dito se o aluno passou, pegou exame ou pegou dp
    float media = soma / 2;
    printf("A sua media eh: %f\n\n", media);
        if(media>7) {
            printf("Voce passou irmao parabens\n");
        }
        else if (media>=4) {
            printf("Se vira pra estudar pra esse exame mermao\n");
        }
        else {
            printf("TU PEGOU DP KKKKKKKKKK\n");
        }
}

int main() {                                       //fazendo pergunta se quer calcular media ou nao, e executando o programa dependendo da resposta
    char r;
    printf("Bom dia, tarde ou noite.\n");
    printf("Voce gostaria de fazer o calculo da sua media semestral? s/n\n");
    scanf("%c", &r);
        if(r == 's') {
            notas();
        }
        else if(r == 'n') {
            printf("entao vai tomar no cu\n");
        }
}
