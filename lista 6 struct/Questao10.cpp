// . Suponha que você esteja realizando uma pesquisa e precise obter os seguintes dados de um
// conjunto de n pessoas (n é informado pelo usuário): nome, sexo (1-M, 0-F), cor dos olhos,
// altura, peso e data de nascimento. Elabore um algoritmo que realize a leitura desses dados
// e imprima duas listagens. A primeira listagem deve conter todos os dados (exceto o sexo) das
// mulheres e a outra deve conter todos os dados (exceto o sexo) dos homens. Ou seja, vamos
// apenas criar uma listagem dos homens e outra das mulheres 

#include <iostream>
#include <string>
using namespace std;
struct Tpessoa{
    string nome;
    string cor;
    float altura,peso;
    string nascimento;
    char sexo;
};
int main(){
    int n,i;
    do{
         cout << "Digite quantas pessoas deseja registrar"<<endl;
        cin >> n;
    }while(n<0);
    Tpessoa pessoa[n];
    for(i=0;i<n;i++){
        cout << "Digite o seu nome "<<endl;
            getline(cin,pessoa[i].nome);
            getchar();
        cout << "Digite a cor dos seus olhos "<<endl;
            getline(cin,pessoa[i].cor);
            getchar();
        cout << "Digite a sua altura e peso"<<endl;
            cin >> pessoa[i].altura >> pessoa[i].peso;
        cout << "Digite a sua data de nascimento "<<endl;
            getline(cin,pessoa[i].nascimento);
            getchar();
        cout << "Digite se voce e homem ou mulher M se for mulher ou H se for homem"<<endl;
            cin >> pessoa[i].sexo;
    }
    cout << "Listagem 1 :"<<endl;
    for(i=0;i<n;i++){
        if(pessoa[i].sexo!='M'){
            cout << pessoa[i].nome<<endl;
            cout << pessoa[i].altura<<endl;
            cout << pessoa[i].peso<<endl;
            cout << pessoa[i].nascimento<<endl;
            cout << pessoa[i].sexo<<endl;
        }
    }
    cout << "Listagem 2 :"<<endl;
    for(i=0;i<n;i++){
        if(pessoa[i].sexo!='H'){
            cout << pessoa[i].nome<<endl;
            cout << pessoa[i].altura<<endl;
            cout << pessoa[i].peso<<endl;
            cout << pessoa[i].sexo<<endl;
            cout << pessoa[i].cor<<endl;
        }

    }
}
