#include<stdio.h>
#include<iostream>

using namespace std;

int cad1 = 0, cad2 = 0, cad3 = 0, cad4 = 0, vot, branco = 0, nulo = 0, continuar = 1;

int main(){
    while(continuar==1){
        cout<<"-----------------------------\n";
        cout<<"|         Jeandro-1         |\n";
        cout<<"|         Celso-2           |\n";
        cout<<"|         Barbosa-3         |\n";
        cout<<"|         Joao Kleber-4     |\n";
        cout<<"|      Voto em Branco-5     |\n";
        cout<<"-----------------------------\n";

        cout<<"Em que candidato vc quer votar?\n";
        cin>>vot;

        if(vot == 1){
            cad1=cad1+1;
        }
        else if(vot == 2){
            cad2=cad2+1;
        }
        else if(vot == 3){
            cad3=cad3+1;
        }
        else if(vot == 4){
            cad4=cad4+1;
        }
        else if(vot == 5){
            branco=branco+1;
        }
        else if(vot > 5){
            nulo=nulo+1;
        }
        else{
            continuar=0;
        }
    }

    cout<<"\n\n Fim da votacao \n\n";

        cout<<"Votos no candidato 1: "<<cad1<<"\n";
        cout<<"Votos no candidato 2: "<<cad2<<"\n";
        cout<<"Votos no candidato 3: "<<cad3<<"\n";
        cout<<"Votos no candidato 4: "<<cad4<<"\n";
        cout<<"Votos nulos: "<<nulo<<"\n";
        cout<<"Votos em branco: "<<branco<<"\n\n";


return 0;
}
