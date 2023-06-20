// Altere o exercício anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de cada
// cliente deverá ser perguntado: "Novo Cliente (S/N)?". Caso o usuário escolha “N” ou chegar
// nos 20 clientes, o programa deve mostrar um relatório de todos os clientes cadastrados e
// finalizar. OBS: Deve-se utilizar um vetor de registros na solução.

#include <iostream>
#include <string>
using namespace std;
struct Tclientes{
    int telefone;
    string nome;
    int identidade;
    string endereco;
};
int main(){
    Tclientes clientes[20];
    int qtd,i=0;
    char escolha;
    do{
        i++;
        cout << "Digite seu telefone"<<endl;
        cin >> clientes[i].telefone;
        cout << "Digite seu nome"<<endl;
        getchar();
        getline(cin,clientes[i].nome);
        cout << "Digite a sua identidade"<<endl;
        cin >> clientes[i].identidade;
        cout << "Digite seu endereco"<<endl;
        getchar();
        getline(cin,clientes[i].endereco);
        cout << "Deseja cadastrar mais alguem ?"<<endl;
        cin >> escolha;

    }while(escolha!='s' && i>20);
    for(qtd=0;qtd<i;qtd++){
        cout <<clientes[qtd].nome<<endl;
        cout <<clientes[qtd].endereco<<endl;
        cout <<clientes[qtd].identidade<<endl;
        cout <<clientes[qtd].telefone<<endl;
    }
cout << "Fim do Progama"<<endl;
}