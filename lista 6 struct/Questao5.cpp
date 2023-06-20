// Altere o exercício anterior para que, após o término de todos os cadastros, ou seja, quando
// o usuário digitar "N" na pergunta para novo cliente ou quando preencher o vetor com 20
// clientes, a tela seja ser limpa e seja exibida uma nova tela perguntando se o usuário quer ver
// um relatório ou consultar um cliente individualmente. Se ele desejar ver o relatório, o
// sistema deverá exibi-lo conforme questão anterior. Se ele escolher consultar um cliente
// individualmente, o sistema deverá solicitar a identidade do cliente procurado, fazer uma
// busca no vetor e informar seus dados caso o cliente esteja cadastrado. Se não existir cliente
// cadastrado com aquela identidade, o sistema deverá informar “Cliente não cadastrado”. 

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
    int qtd,i=0,auxidentidade;
    char escolha;
    bool existe=false;
    do{
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
        i++;
    }while(escolha!='s' && i>20);
    system("cls");
    cout << "Deseja ver o relatoric dos cadastros do cliente ou cadastro individual(r-pra relatorio i-individual)"<<endl;
    cin >> escolha;
    if(escolha=='r'){
        for(qtd=0;qtd<i;qtd++){
        cout <<clientes[qtd].nome<<endl;
        cout <<clientes[qtd].endereco<<endl;
        cout <<clientes[qtd].identidade<<endl;
        cout <<clientes[qtd].telefone<<endl;
        }
    }else{
        cout << "Digite a identidade do cliente que deseja buscar"<<endl;
        cin >> auxidentidade;
            for(qtd=0;qtd<i;qtd++){
                if(clientes[qtd].identidade==auxidentidade){
                    cout << clientes[qtd].nome<<endl;
                    cout << clientes[qtd].identidade<<endl;
                    cout << clientes[qtd].endereco<<endl;
                    cout << clientes[qtd].telefone<<endl;
                    existe=true;
                }
            }
            if(!existe){
                cout << "Cliente não Cadastrado"<<endl;
            }
    }    
    
cout << "Fim do Progama"<<endl;
}