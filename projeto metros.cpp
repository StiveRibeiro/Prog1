#include<stdio.h>
#include<iostream> //iostream eh a biblioteca usada para as funcoes "cout" e "cin"

//aula do dia 17/08, mostra como usar as funcoes "cout" e "cin"

using namespace std;  //isso inicializa as funcoes usadas nesse codigo

float metro;

int main() {
    cout<<"Inicio Algoritmo de Transformacao de Medidas\n\n";
    cout<<"Qual a medida em metros voce gostaria de transformar? ";
    cin>>metro;

    cout<<"A medida em decimetros eh: "<<metro * 10<<"dm\n";
    cout<<"A medida em centimetros eh: "<<metro * 100<<"cm\n";
    cout<<"A medida em milimetros eh: "<<metro * 1000<<"mm\n";

    return 0;
    }
