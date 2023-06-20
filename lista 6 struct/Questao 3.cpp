// Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias
// para o cliente são: identidade, nome, endereço e telefone. OBS: Deve ser usada uma
// estrutura de registro para a construção deste cadastro. 

#include <iostream>
#include <string>
using namespace std;

struct tcliente{
    int identidade;
    string nome;
    string endereco;
    int telefone;

};
int main(){
    int i,qtd;
    tcliente cliente[2];

    do{
        cout << "Quantos clientes deseja cadastrar "<<endl;
        cin >> qtd;
    }while(qtd>2 && qtd<0);
    
    for(i=0;i<qtd;i++){
        getchar();
        cout << "Digite sua Identidade : "<<endl;
        cin >> cliente[i].identidade;
        cout << "Digite seu nome"<<endl;
        getline(cin,cliente[i].nome);
        getchar();
        cout << "Digite seu endereco"<<endl;
        getchar();
        getline(cin,cliente[i].endereco);
        cout << "Digite seu telefone"<<endl;
        getchar();
        cin >> cliente[i].telefone;


    }
    for(i=0;i<qtd;i++){
        cout <<cliente[i].identidade<< " "<<"\n";
        cout <<cliente[i].nome<<" "<<"\n";
        cout <<cliente[i].endereco<<" "<<"\n";
        cout <<cliente[i].telefone<<" "<<"\n";

    }
}