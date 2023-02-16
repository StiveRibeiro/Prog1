#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int opcao;
float n1, n2, n3;
bool continuar = true;

void conta(){

    switch(opcao) {

        case 1:
            cout<<"\nDigite os números a serem operados. \n";
            cout<<"Primeiro número: ";
            cin>>n1;
            cout<<"Segundo número: ";
            cin>>n2;
            n3 = n1 + n2;
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        case 2:
            cout<<"\nDigite os números a serem operados. \n";
            cout<<"Primeiro número: ";
            cin>>n1;
            cout<<"Segundo número: ";
            cin>>n2;
            n3 = n1 - n2;
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        case 3:
            cout<<"\nDigite os números a serem operados. \n";
            cout<<"Primeiro número: ";
            cin>>n1;
            cout<<"Segundo número: ";
            cin>>n2;
            n3 = n1 * n2;
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        case 4:
            cout<<"\nDigite os números a serem operados. \n";
            cout<<"Primeiro número: ";
            cin>>n1;
            cout<<"Segundo número: ";
            cin>>n2;
            n3 = n1 / n2;
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        case 5:
            cout<<"\nDigite os números a serem operados. \n";
            cout<<"Primeiro número(base): ";
            cin>>n1;
            cout<<"Segundo número(potência): ";
            cin>>n2;
            n3 = pow(n1,n2);
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        case 6:
            cout<<"\nDigite os números a serem operados. \n";
            cout<<"Primeiro número(base): ";
            cin>>n1;
            cout<<"Segundo número(raiz): ";
            cin>>n2;
            n2 = 1/n2;
            n3 = pow(n1, n2);
            cout<<"\nO resultado é: "<<n3<<"\n";
            break;

        default:
            cout<<"Operação inválida.";
            break;

    }
}


int main(){

    setlocale(LC_ALL, "Portuguese");

    while(continuar){
    cout<<"|-----------MENU-----------|\n";
    cout<<"|   1 - SOMA               |\n";
    cout<<"|   2 - SUBTRAÇÃO          |\n";
    cout<<"|   3 - MULTIPLICAÇÃO      |\n";
    cout<<"|   4 - DIVISÃO            |\n";
    cout<<"|   5 - POTENCIAÇÃO        |\n";
    cout<<"|   6 - RADICIAÇÃO         |\n";
    cout<<"|   7 - SAIR               |\n";
    cout<<"|-----------====-----------|\n";
    cout<<"Escolha uma opção: ";
    cin>>opcao;

    switch(opcao){

        case 1:
            cout<<"\nOpção escolhida SOMA\n";
            conta();
            break;

        case 2:
            cout<<"\nOpção escolhida SUBTRAÇÃO\n";
            conta();
            break;

        case 3:
            cout<<"\nOpção escolhida MULTIPLICAÇÃO\n";
            conta();
            break;

        case 4:
            cout<<"\nOpção escolhida DIVISÃO\n";
            conta();
            break;

        case 5:
            cout<<"\nOpção escolhida POTENCIAÇÃO\n";
            conta();
            break;

        case 6:
            cout<<"\nOpção escolhida RADICIAÇÃO\n";
            conta();
            break;


        case 7:
            cout<<"\nOpção escolhida SAIR\n";
            continuar = false;
            break;

        default:
            cout<<"\nOpção inválida\n";
            main();
    }
    }

return 0;
}
