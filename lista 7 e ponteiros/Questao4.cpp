// Escreva um programa que lê um valor inteiro (maior do que 1 e menor ou igual a
// 10) e exibe a tabuada (até 10) de multiplicação do número lido. Você deverá escrever as
// seguintes funções:
// - int LeNumero(int n1,int n2)
// Lê um número inteiro no intervalo especificado (n1, n2) e o retorna. Cada vez que for
// digitado um número inválido (fora do intervalo especificado) a função deve exibir a
// mensagem "Número inválido. Digite novamente!"
// - void Tabuada( int n)
// Recebe como parâmetro um número inteiro e exibe na tela a tabuada de multiplicação
// até 10 do número lido. Exemplo: número lido 5

#include <iostream> 
using namespace std;
void tabuada(int n1);
int lenumero(int n1 , int n2 , int n3);

int main(){
    bool acertou=false;
    int num,num2,num3;

    cout << "Digite um numero para ser imprimido sua tabuada de 1 a 10 "<<endl;
        cin >> num;
    tabuada(num );
    cout << "Digite um numero que esta no intervalo de 1 a 10 "<<endl;
        cin >> num2;
    do{
        num3 = lenumero(1,10,num2);
        if(num3!=num2 ){
        cout << "O numero digitado esta incorreto digite novamente outro numero "<<endl; 
        }else{
            cout << num3<<endl;
        }
        
    }while(num3!=num2);
    


}
void tabuada(int n1){
    int multi=1;
    int i;
    for(i=1;i<=10;i++){
        cout << n1<< " vezes "<<i<<" é igual a "<<n1*i<<endl;
    }

};
int lenumero(int n1 , int n2 , int n3){
    int i;
    bool achou=false;
    //do{
        for(i=n1;i<=n2;i++){
            if(n3==i){
            achou=true;
            }
        }
        if(achou){
        return n3;
        }
    //}while(!achou);
    

};
