#include<stdio.h>
#include<iostream>

using namespace std;

float n1, n2, n3;
char a;

int main() {
    cout<<"Numero 1: ";
    cin>>n1;
    cout<<"Operador: ";
    cin>>a;
    cout<<"Numero 2: ";
    cin>>n2;

    if (a == '+') {
        n3 = n1 + n2;
    }

    else if (a == '-') {
        n3 = n1 - n2;
    }

    else if (a == '*') {
        n3 = n1 * n2;
    }

    else if (a == '/') {
        n3 = n1 / n2;
    }

    cout<<"O resultado eh: "<<n3<<"\n";

return 0;
}
