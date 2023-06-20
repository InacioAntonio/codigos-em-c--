// Elabore um algoritmo que defina um registro capaz de armazenar as seguintes informações
// sobre um determinado cliente de um banco: nome, CPF, RG, número da conta, data de
// abertura da conta e saldo. Em seguida manipule um vetor com 15 registros de clientes, onde
// cada registro é um elemento do tipo de dado definido. A manipulação do vetor é feita através
// das seguintes opções: cadastrar cliente, imprimir os dados de um determinado cliente com
// base no valor do campo CPF e imprimir todos os clientes com saldo negativo. 

#include <iostream>
#include <string>
using namespace std;
struct Tconta{
    string nome;
    int cpf,rg;
    int numconta;
    string data;
    int saldo;
};
int main(){
    Tconta conta[16];
    int i,qtd;
    int auxcpf,auxsaldo;
    bool achou=false;

    do{
    cout << "Quantos clientes deseja cadastrar "<<endl;
        cin >>qtd;
    }while(qtd>16 && qtd<0);
    for(i=0;i<qtd;i++){
        getchar();
        cout << "Digite seu nome"<<endl;
            getline(cin,conta[i].nome);
        cout << "Digite seu cpf"<<endl;
            cin >> conta[i].cpf;
            getchar();
        cout << "Digite seu RG"<<endl;
            cin >> conta[i].rg;
        cout << "Digite o numero da conta"<<endl;
            cin >> conta[i].numconta;
        cout << "Digite a data de abertura da conta"<<endl;
            cin >> conta[i].data;
        cout << "Digite o seu saldo"<<endl;
            cin >> conta[i].saldo;
        
    }
    cout << "Digite seu CPF para mostrar seus dados cadastrais"<<endl;
        cin >> auxcpf;
    for(i=0;i<qtd;i++){
        if(conta[i].cpf==auxcpf){
            achou=true;
            cout <<"Nome do cliente é "<<conta[i].nome<<endl;
            cout <<"Rg do cliente é "<<conta[i].rg<<endl;
            cout <<"Cpf do cliente é "<<conta[i].cpf<<endl;
            cout <<"Data da abertura da sua conta "<<conta[i].data<<endl;
            cout <<"O Saldo da sua conta é de"<<conta[i].saldo<<endl;

        }
        
    
    }
    if(!achou){
            cout << "O cpf digitado nao foi cadastrado"<<endl;
        }
    for(i=0;i<qtd;i++){
        if(conta[i].saldo<0){
            cout << "As contas negativadas são :"<<endl;
            cout << conta[i].nome;
            cout << conta[i].cpf;
            cout << conta[i].rg;
            cout << conta[i].data;
            cout << conta[i].numconta;
            cout << conta[i].saldo;
        }
    }
}

