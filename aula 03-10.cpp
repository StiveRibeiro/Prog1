#include <stdio.h>
#include <iostream>

using namespace std;

int num[10];
int i, menor;


int main(){

    for(i=0; i<10; i++){
        cout<<"Informe um numero inteiro: ";
        cin>>num[i];
    }

    menor = num[0];

    for(i=0; i<10; i++){

        if(num[i] < menor){
            menor = num[i];
        }
    }
    cout<<"O menor valor eh: "<<menor<<"\n\n";
return 0;
}
