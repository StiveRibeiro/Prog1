#include<stdio.h>
#include<iostream>
#include<locale.h>

using namespace std;

int opcao;
float n1, n2, n3;
bool continuar = true;

void conta(){
    cout<<"\nDigite os n�meros a serem operados. \n";
    cout<<"Primeiro n�mero: ";
    cin>>n1;
    cout<<"Segundo n�mero: ";
    cin>>n2;

    switch(opcao) {

        case 1:
            n3 = n1 + n2;
            cout<<"\nO resultado �: "<<n3<<"\n";
            break;

        case 2:
            n3 = n1 - n2;
            cout<<"\nO resultado �: "<<n3<<"\n";
            break;

        case 3:
            n3 = n1 * n2;
            cout<<"\nO resultado �: "<<n3<<"\n";
            break;

        case 4:
            n3 = n1 / n2;
            cout<<"\nO resultado �: "<<n3<<"\n";
            break;

        default:
            cout<<"Opera��o inv�lida.";
            break;

    }
}


int main(){

    setlocale(LC_ALL, "Portuguese");

    while(continuar){
    cout<<"|-----------MENU-----------|\n";
    cout<<"|   1 - SOMA               |\n";
    cout<<"|   2 - SUBTRA��O          |\n";
    cout<<"|   3 - MULTIPLICA��O      |\n";
    cout<<"|   4 - DIVIS�O            |\n";
    cout<<"|   5 - SAIR               |\n";
    cout<<"|-----------====-----------|\n";
    cout<<"Escolha uma op��o: ";
    cin>>opcao;

    switch(opcao){

        case 1:
            cout<<"\nOp��o escolhida SOMA\n";
            conta();
            break;

        case 2:
            cout<<"\nOp��o escolhida SUBTRA��O\n";
            conta();
            break;

        case 3:
            cout<<"\nOp��o escolhida MULTIPLICA��O\n";
            conta();
            break;

        case 4:
            cout<<"\nOp��o escolhida DIVIS�O\n";
            conta();
            break;

        case 5:
            cout<<"\nOp��o escolhida SAIR\n";
            continuar = false;
            break;

        default:
            cout<<"\nOp��o inv�lida\n";
            continuar = false;
    }
    }

return 0;
}
