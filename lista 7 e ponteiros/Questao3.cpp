// Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e
// retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta
// função em um programa que lê n1 e n2 do usuário e imprime a soma. 

#include <iostream>
using namespace std;
int intervalo(int n1, int n2);

int main(){
    int num1 , num2, soma;
    cout << "Digite 2 numeros "<<endl;
    cin >> num1 >> num2;
    soma=intervalo(num1, num2 );

    cout << "A soma dos intervalos é de "<<soma<<" "<<endl;

}
int intervalo(int n1 , int n2){
    int soma=0,i,total;
    for(i=n1;i<=n2;i++){
        soma+=i;
    }
    return soma ;
    
};