// Elabore um algoritmo que receba um nome completo em uma string e apresente apenas o último nome e o
// 1º nome na seguinte forma: último nome, 1º nome.
// Entrada: Ana Fernandes Oliveira
// Saída: Oliveira, Ana 
#include<iostream>
#include <string.h>
using namespace std;

int main(){
    string ultimo,primeiro,nome;
    int i,qtd=0,soma=0,indice;

    cout << "Digite seu nome Completo"<<endl;
    getline(cin,nome);
        for(i=0;i<nome.length();i++){
             
                if(nome[i]==' '){
                    qtd++;
                    soma+=qtd;
                    indice=i;
                }
                if(qtd==0){
                    primeiro+=nome[i];
                }
        }
            for(i=indice+1;i<nome.length();i++){
                    ultimo+=nome[i];
                   

            }
    cout << ultimo<<","<<primeiro<<endl;
    cout<<qtd<<endl;
}
