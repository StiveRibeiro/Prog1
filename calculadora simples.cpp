#include<stdio.h>
#include<iostream>
#include<locale.h>

using namespace std;

int opcao;
float n1, n2, n3;


void conta(){
    cout<<"\nDigite os números a serem operados. \n";
    cout<<"Primeiro número: ";
    cin>>n1;
    cout<<"Segundo número: ";
    cin>>n2;

    switch(opcao) {

        case 1:
            n3 = n1 + n2;
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        case 2:
            n3 = n1 - n2;
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        case 3:
            n3 = n1 * n2;
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        case 4:
            n3 = n1 / n2;
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        default:
            cout<<"Operação inválida.";
            break;

    }
}


int main(){

    setlocale(LC_ALL, "Portuguese");

    cout<<"|-----------MENU-----------|\n";
    cout<<"|   1 - SOMA               |\n";
    cout<<"|   2 - SUBTRAÇÃO          |\n";
    cout<<"|   3 - MULTIPLICAÇÃO      |\n";
    cout<<"|   4 - DIVISÃO            |\n";
    cout<<"|-----------====-----------|\n";
    cout<<"Escolha uma opção: ";
    cin>>opcao;

    switch(opcao){

        case 1:
            cout<<"\nOpção escolhida SOMA\n";
            break;

        case 2:
            cout<<"\nOpção escolhida SUBTRAÇÃO\n";
            break;

        case 3:
            cout<<"\nOpção escolhida MULTIPLICAÇÃO\n";
            break;

        case 4:
            cout<<"\nOpção escolhida DIVISÃO\n";
            break;

        default:
            cout<<"\nOpção inválida\n";
    }

    if (opcao < 5 && opcao > 0){
        conta();
    }

    else {
        cout<<"Tente novamente\n";
    }

return 0;
}
