#include<stdio.h>
#include<iostream>

using namespace std;

float fahrenheit, celsius;
int fahrenheiti, celsiusi; //usei "i" pra identificar uma variavel diferente, inteira

int main () {
    cout<<"Inicio Algoritmo Transformacao Fahrenheit em Celsius\n\n";
    cout<<"Qual o valor em Farenheit que sera transformado? ";
    cin>>fahrenheit;

    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

    cout<<"O valor em Celsius eh: "<<celsius<<"\n\n\n";

    //essa parte simplesmente mostra que ao usar numeros inteiros, a funcao nao funciona, pois a divisao 5/9 resulta em um numero racional
/*
    cout<<"Parte 2 do projeto, agora usando valores inteiros\n\n";
    cout<<"Qual o valor, inteiro, em Fahrenheit que sera transformado? ";
    cin>>fahrenheiti;

    celsiusi = (fahrenheiti - 32) * (5 / 9);

    cout<<"O valor em Celsius eh: "<<celsiusi<<"\n\n";
    return 0;
    */
}
