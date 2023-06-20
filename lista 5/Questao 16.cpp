// . Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string, verifique e escreva se
// a palavra está contida na frase.
// Entradas: “esta é a frase” e “frase”
// Saída: a palavra “frase” está contida na frase “esta é a frase”. 
#include<iostream>
#include <string>
using namespace std;

int main(){
    bool contida = false; 
    string frase;
    string palavra;
    string pedaco;
    int i;
    cout << "Digite uma frase "<<endl;
    getline(cin,frase);
    cout <<"Digite uma palavra "<<endl;
    getline(cin,palavra);
    i=0;

    do{
        pedaco+=frase[i];
            if(pedaco[i]==frase[i]){
                contida=true;
            }else{
                contida=false;
            }
        i++;
    }while( contida && (frase[i]!=' '));
    if(contida){
        cout << "A palavra  esta contida na frase "<<endl;
    }else
        cout << "A palavra não esta contida na frase digitada "<<endl;
}