// Elabore um algoritmo que leia uma string qualquer e escreva-a espelhada.
// Entrada: “uma frase qualquer”
// Saída: “reuqlauq esarf amu” 
#include <iostream>
using namespace std;

int main(){
    string frase,inverso;
    int i;

        cout << "Digite uma frase"<<endl;
        getline(cin,frase);
            for(i=frase.length();i>=0;i--){
                cout <<frase[i]<<" ";

            }
}