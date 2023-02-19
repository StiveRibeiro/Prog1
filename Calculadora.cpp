#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int op;
float n1, n2, n3;

int main(){

    setlocale(LC_ALL, "Portuguese");

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
    cin>>op;

    switch(op){

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

        case 5:
            cout<<"\nOpção escolhida POTENCIAÇÃO\n";
            break;

        case 6:
            cout<<"\nOpção escolhida RADICIAÇÃO\n";
            break;


        case 7:
            cout<<"\nOpção escolhida SAIR\n";
            return 0;
            break;

        default:
            cout<<"\nOpção inválida\n";
            main();
    }

        switch(op) {

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
            cout<<"|  1 - Raiz quadrada  |\n";
            cout<<"|  2 - Raiz cúbica    |\n";
            cout<<"|  3 - Outra raiz     |\n";
            cin>>op;

            switch(op) {

                case 1:
                    cout<<"Digite o número a ser operado. \n";
                    cin>>n1;
                    n2 = sqrt(n1);
                    cout<<"O resultado é: "<<n2<<"\n";
                    break;

                case 2:
                    cout<<"Digite o número a ser operado. \n";
                    cin>>n1;
                    n2 = cbrt(n1);
                    cout<<"O resultado é: "<<n2<<"\n";
                    break;

                case 3:
                    cout<<"\nDigite os números a serem operados. \n";
                    cout<<"Primeiro número(base): ";
                    cin>>n1;
                    cout<<"Segundo número(raiz): ";
                    cin>>n2;
                    n3 = pow(n1, 1/n2);
                    cout<<"\nO resultado é: "<<n3<<"\n";
                    break;

                default:
                    cout<<"\nOpção inválida.\n";
                    main();
            }
            break;
    }
    main();
}
