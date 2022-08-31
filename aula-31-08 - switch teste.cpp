#include<stdio.h>
#include<iostream>

using namespace std;

int opcao;

int main(){
    cout<<"|-----------MENU-----------|\n";
    cout<<"|   1 - SOMA               |\n";
    cout<<"|   2 - SUBTRACAO          |\n";
    cout<<"|   3 - MULTIPLICACAO      |\n";
    cout<<"|   4 - DIVISAO            |\n";
    cout<<"|-----------====-----------|\n";
    cout<<"Escolha uma opcao: ";
    cin>>opcao;

    switch(opcao){

        case 1:
            cout<<"\nOpcao escolhida SOMA\n";
            break;

        case 2:
            cout<<"\nOpcao escolhida SUBTRACAO\n";
            break;

        case 3:
            cout<<"\nOpcao escolhida MULTIPLICACAO\n";
            break;

        case 4:
            cout<<"\nOpcao escolhida DIVISAO\n";
            break;

        default:
            cout<<"\nOpcao invalida\n";
    }



return 0;
}


