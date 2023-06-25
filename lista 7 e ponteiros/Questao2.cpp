// Faça uma função que recebe um número inteiro por parâmetro e retorna
// verdadeiro se ele for par e falso se for ímpar. 

#include <iostream>
using namespace std;
 bool paridade(int n1);

 int main(){
    int num1;
    bool impar=false;
    cout << "Digite um numero "<<endl;
    cin >> num1;
    impar=paridade(num1);
    if(impar ){
        cout << "O numero digitado é impar "<<endl;
    }else{
        cout << "O numero digitado é par "<<endl;
    }
 }
 bool paridade(int n1){
    if(n1%2!=0){
        return true;
    }else{
        return false;
    }
 };