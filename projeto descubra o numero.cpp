#include<stdio.h>
#include<iostream>

using namespace std;

float n1, n2, n3;
void numeros() {
    cout<<"Qual o primeiro numero que voce quer somar? ";
    cin>>n1;
    cout<<"Qual o segundo numero que voce quer somar? ";
    cin>>n2;

    n3 = n1 + n2;

        if (n3 < 69.0) {
            cout<<"O numero que resulta eh: "<<n3<< ", esse nao eh o numero secreto, tente novamente.\n\n";
        }
        else if (n3 == 69.0) {
            cout<<"Parabens, voce descobriu o numero secreto! "<<n3<<"\n";
        }
        else if (n3 > 69.0) {
            cout<<"O numero que resulta eh: "<<n3<< ", esse nao eh o numero secreto, tente novamente.\n\n";
        }
}

int main() {
    cout<<"Ola, voce esta aqui para descobrir o numero secreto!\n\n";
    numeros();
    while (n3 != 69.0){
        numeros();
    }
return 0;
}
