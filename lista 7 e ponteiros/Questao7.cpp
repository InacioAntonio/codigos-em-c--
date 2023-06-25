// Escreva uma função chamada Troca que troque os valores dos parâmetros
// recebidos. Essa função não deve ter retorno.

#include <iostream>
using namespace std;

void troca(float n1,float n2);

int main(){
    float  num,num2;
    cout << "Digite o numero "<<endl;
        cin >> num;
    cout << "Digite outro numero "<<endl;
        cin >> num2;
    troca(num,num2);
    
}
void troca(float n1,float n2){
    cout <<"O primeiro numero digitado é de  "<<n2<<" O segundo numero digitado foi de " <<n1 <<endl;


};