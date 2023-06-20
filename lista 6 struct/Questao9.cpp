// Crie um tipo registro chamado Endereco que contenha os campos Rua (string), Numero (int),
// Bairro (string), Cidade (string), Estado (string). Em seguida declare uma variável do tipo
// Endereco. Crie outro tipo registro chamado Pessoa que tenha os campos Nome (string),
// Ender (Endereco), Telefone (string) e Idade (int).
// - Declare um vetor pessoas com 10 posições do tipo Pessoa e leia seus dados;
// - Faça uma busca por bairro e escreva os nomes de todos que moram no bairro informado

#include <iostream>
#include <string>
using namespace std;
struct Tendereco{
    string rua, bairro, cidade,estado; 
    int num;
};
    Tendereco endereco[10];
struct Tpessoa{
    string nome,telefone;
    Tendereco endereco;
    int idade;
};
 int main(){
    Tpessoa pessoa[10];
    int i,qtd;
    string auxbairro;
    bool achou=false;

    do{
        cout << "Digite a quantidade de pessoas que voce deseja cadastrar  "<<endl;
        cin >> qtd;
    }while(qtd<0 || qtd>10);
    for(i=0;i<qtd;i++){
        cout << "Digite o seu Nome "<<endl;
            getline(cin,pessoa[i].nome);
            getchar();
        cout << "Digite o seu telefone "<<endl;
            getline(cin,pessoa[i].telefone);
            getchar();
        cout << "Digite a sua Idade "<<endl;
            cin >> pessoa[i].idade;
            getchar();
        cout << "Digite o bairro que voce mora "<<endl;
            getline(cin,pessoa[i].endereco.bairro);
            getchar();
        cout << "Digite o numero do seu endereco "<<endl;
            cin >> pessoa[i].endereco.num;
        cout << "Digite a rua aonde voce mora  "<<endl;
                getchar();
                cin >> pessoa[i].endereco.rua;
        cout << "Digite o Bairro aonde voce mora"<<endl;
                getline(cin,pessoa[i].endereco.cidade);
                getchar();
        cout << "Digite a Cidade aonde voce mora"<<endl;
            getline(cin,pessoa[i].endereco.cidade);
    }
    cout << "Digite o bairro da pessoa que esta procurando"<<endl;
        getline(cin,auxbairro);
    for(i=0;i<qtd;i++){
        if(pessoa[i].endereco.bairro==auxbairro){
            achou=true;
            cout << "As pessoas encontradas foram :"<<endl;
            cout << pessoa[i].nome<<endl;
            cout << pessoa[i].idade<<endl;
            cout << pessoa[i].telefone<<endl;
            cout << pessoa[i].endereco.estado<<endl;
            cout << pessoa[i].endereco.cidade<<endl;
            cout << pessoa[i].endereco.bairro<<endl;
            cout << pessoa[i].endereco.rua<<endl;
            cout << pessoa[i].endereco.num<<endl;

        }
        if(!achou){
            cout << "Endereco nao cadastrado"<<endl;
        }
    }
 }
