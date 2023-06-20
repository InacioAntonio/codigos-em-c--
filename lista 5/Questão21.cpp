// Elabore um algoritmo que declare duas strings e leia a primeira string. Em seguida, copie o texto da primeira
// string para a segunda em letras maiúsculas se a primeira letra da primeira string for minúscula ou em letras
// minúsculas se a primeira letra da primeira string for maiúscula. Imprima no final o conteúdo das duas strings. 

#include <iostream>
#include <string>
using namespace std;

int main(){
    string primeiro,segundo;
    int i,contador;
    bool minusculo=false;

    cout << "Digite uma palavra"<<endl;
        getline(cin,primeiro);
        for(i=0;i<primeiro.length();i++){
            if(primeiro[i]<97){
                segundo+=primeiro[i];
            }else{
                segundo+=(primeiro[i]-32);
            }
            if(primeiro[i]>90){
                contador++;
            }
            if((primeiro[0]>90)or (contador==primeiro.length()-1))
            minusculo=true;

        }
        if(minusculo==true){
            cout << primeiro<<endl;
            cout << segundo<<endl;
        }else
            cout << segundo<<endl;
}