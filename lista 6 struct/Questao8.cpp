// Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do
// cliente, e-mail, número de horas de acesso, página (‘S’-sim ou ‘N’-não). Elaborar um
// algoritmo que insira um conjunto de registros (máximo 500), calcule e mostre um relatório
// contendo o valor a pagar por cada cliente, sabendo-se que as primeiras 20 horas de acesso
// custam R$ 35,00 e as horas que excederam tem o custo de R$ 2,50 por hora. Para os clientes
// que têm página, adicionar R$ 40,00. 

#include <iostream>
#include <string>
using namespace std;
struct Tclientes{
    string email;
    int horas,codigo;
    string pagina;
};

int main(){
    Tclientes cliente[500];
    int i,qtd;
    float pagar[i];

    do{
        cout << "Digite a quantidade de registros que voce pretende fazer"<<endl;
        cin >> qtd;
    }while(qtd>500 || qtd<0);
    for(i=0;i<qtd;i++){
        cout << "Digite o seu codigo da operadora"<<endl;
        cin >> cliente[i].codigo;
        getchar();
        cout <<"Digite seu email"<<endl;
            getline(cin,cliente[i].email);
            getchar();
        cout <<"Digite a quantidade de horas que voce ultiliza a internet "<<endl;
        cin >> cliente[i].horas;
            getchar();
        cout << "Digite se o Seu plano é pagina ou nao se for digite sim "<<endl;
            getline(cin,cliente[i].pagina);
    }
    for(i=0;i<qtd;i++){
        if(cliente[i].horas<=20 && cliente[i].pagina=="sim"){
            cout << cliente[i].codigo<<endl;
            cout << cliente[i].email<<endl;
            cout << cliente[i].horas<<endl;
            cout << cliente[i].pagina<<endl;
            pagar[i]=75;
            cout << "O valor a pagar é de : "<<pagar[i];   
            }
        }
        for(i=0;i<qtd;i++){
            if(cliente[i].horas>20 && cliente[i].pagina=="sim"){
                cout << cliente[i].codigo<<endl;
                cout << cliente[i].email<<endl;
                cout << cliente[i].horas<<endl;
                cout << cliente[i].pagina<<endl;
                pagar[i]=75+(2.50)*(-20+cliente[i].horas);
                cout << "O valor a pagar é de : "<<pagar[i];
            }
        }  
        for(i=0;i<qtd;i++){
            if(cliente[i].horas<=20 && cliente[i].pagina=="nao"){
            pagar[i]=35;
            cout << cliente[i].codigo<<endl;
            cout << cliente[i].email<<endl;
            cout << cliente[i].horas<<endl;
            cout << cliente[i].pagina<<endl;
            cout << "O valor a ser pago é de: "<<pagar[i]<<endl;
                }
        }
        for(i=0;i<qtd;i++){
            if(cliente[i].horas>20 && cliente[i].pagina=="nao"){
                    pagar[i]=35+(2.50)*(-20+cliente[i].horas);
                    cout << cliente[i].codigo<<endl;
                    cout << cliente[i].email<<endl;
                    cout << cliente[i].horas<<endl;
                    cout << cliente[i].pagina<<endl;
                    cout << "O valor que deve ser pago  é de"<<pagar[i]<<endl;;
                }
            }
}