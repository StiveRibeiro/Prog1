#include <stdio.h>

//dia 12/08, continuando as aulas do w3schools, comecando em while, for, continue, etc

int main() {  //essa parte esta comentada pra fora porque eh uma sequencia de numeros grande
 /*   int i = 0;

    while (i <= 69420) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
*/

//agora indo pra arrays

    int numerosDaora[] = {42, 69, 420, 69420};
    int n;

    for (n = 0; n < 4; n++) {
    printf("%d\n", numerosDaora[n]);
    }

}
