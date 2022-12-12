#include <iostream>
using namespace std;

int vetor[20];
int i, valor, pos, enc=0;

int main(){
    cout<<"Digite os valores do vetor (20 valores)\n";
    for(i = 0; i<20; i++){
        cout<<"Valor " <<i<<": ";
        cin>>vetor[i];
    }

    cout<<"\nDigite um valor qualquer: ";
    cin>>valor;
    for(i = 0; i<20; i++){
            if(vetor[i] == valor){
                pos = i;
                enc = 1;
            }
    }

    if(enc==0){
        cout<<"Valor nao encontrado no vetor";
    }
    else{
        cout<<"Valor encontrado na posicao "<<pos;
    }

}

