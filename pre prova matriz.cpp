#include <iostream>
#include <stdlib.h>
using namespace std;

#define nlin 8
#define ncol 8

int matriz[nlin][ncol];
int l, c, maior, soma;

int main(){
    for(l=0; l<nlin; l++){
        for(c=0; c<ncol; c++){
            matriz[l][c] = rand() % 100;
        }
    }
    cout<<"A matriz eh: \n";
    for(l=0; l<nlin; l++){
        cout<<endl;
        for(c=0; c<ncol; c++){
            cout<<matriz[l][c]<<" ";
        }
    }

    for(l=0; l<nlin; l++){
        if(matriz[l][l]>maior){
            maior = matriz[l][l];
        }
    }
    cout<<"\n\nO maior valor da diagonal principal eh: "<<maior;

    for(l=0; l<nlin; l++){
        soma = soma + matriz[l][nlin - 1 - l];
    }
    cout<<"\nA soma dos valores da diagonal secundaria eh: "<<soma;
    cout<<endl;
}
