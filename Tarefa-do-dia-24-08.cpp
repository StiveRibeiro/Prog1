#include<stdio.h>
#include<iostream>

using namespace std;

float n1, n2, n3;

int main(){
    cout<<"Qual o primeiro numero que voce quer somar? ";
    cin>>n1;
    cout<<"Qual o segundo numero que voce quer somar? ";
    cin>>n2;

    n3 = n1 + n2;

        if (n3 < 42.0) {
        cout<<"O numero que resulta eh: "<<n3<< "\n";
    }
        else {
            cout<<"O numero que resulta eh maior que o numero secreto, tente novamente\n";
        }
return 0;
}

