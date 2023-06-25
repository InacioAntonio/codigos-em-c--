// Elaborar o algoritmo da calculadora utilizando funções. Implementar as seguintes
// opções: soma, subtração, multiplicação e divisão. 

#include <iostream>
using namespace std ;

float soma(float  n1, float  n2 );
float sub(float  n1, float  n2);
float multi(float n1, float n2);
float divi(float n1, float n2 );

int main(){
    float num1,num2,resultado=0;
    int escolha;

    cout  << "Digite os numeros que deseja calcular "<<endl;
        cin >> num1 >> num2;
    cout << "Qual operacao deseja realizar  1- para soma 2- para Subtracao 3- para multi 4- divisao"<<endl;
        cin >> escolha;
    switch (escolha ){
        case 1:
        resultado=soma(num1,num2);
        cout << "O resultado é de "<<resultado<<" "<<endl;
        break;
        case 2:
        resultado=sub(num1,num2);
        cout << "O resultado é de "<<resultado<<" "<<endl;
        break;
        case 3:
        resultado=multi(num1,num2);
        cout << "O resultado é de "<<resultado<<" "<<endl;
        break;
        case 4:
        resultado=divi(num1,num2);
        cout << "O resultado é de "<<resultado<<" "<<endl;
        break;
        default:
        cout << "Opcao Invalida "<<endl;
    }
    
    

}
float soma(float n1, float n2 ){
    return n1+n2;
};
float sub(float n1, float n2 ){
    return n1-n2;
};
float multi(float n1 , float n2 ){
    return n1*n2;
};
float divi(float n1 , float n2 ){
    return n1/n2;
}