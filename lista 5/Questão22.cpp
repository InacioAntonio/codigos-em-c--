// Elabore um algoritmo que leia uma frase e escreva-a de duas formas: a frase completa e a frase contendo só
// as palavras em “posições ímpares” (1ª palavra, 3ª palavra, 5ª palavra, ...).
// Entrada: eu gosto de roupa azul
// Saída: eu de azul
#include <iostream>
#include <string>
using namespace std;

int main(){
    string frase,impare;
    bool espaco=false,impar=true;
    int i,indice=0;
    cout << "Digite uma frase"<<endl;
        getline(cin,frase);
        for(i=0;i<frase.length();i++){
            if(frase[i]==' '){
                if(impar){
                    impare+=frase.substr(indice,i-indice+1);
                }
                indice=i+1;
                impar=!impar;

            }
        }
    cout <<"A frase foi modificada"<<endl;
    cout <<impare<<endl;
}
