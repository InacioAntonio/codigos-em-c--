// Uma empresa tem para cada um dos seus 200 funcionários uma ficha contendo o nome,
// número de horas trabalhadas e o número de dependentes. Considerando que:
// - A empresa paga 12 reais por hora e 40 reais por dependentes;
// - Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
// Elabore um algoritmo que declare o registro do funcionário, e leia seus dados enquanto o
// usuário desejar cadastrar (não permitindo o cadastro de mais de 200 funcionários). Após a
// leitura, escreva o nome, salário bruto, os valores descontados para cada tipo de imposto e
// qual o salário líquido de cada um dos funcionários que foram cadastrados. 

#include <iostream>
#include <string>
using namespace std;
struct Tfuncionario{
    string nome;
    int horas;
    int dependentes;
};

int main(){
    int i,qtd;
    float salario[200],salariobruto[200],inss[200],ir[200];
    Tfuncionario funcionario[200];
    do{
        cout << "Quantos Funcionario voce deseja cadastrar"<<endl;
        cin >> qtd;
    }while(qtd>200 && qtd<0);
    for(i=0;i<qtd;i++){
        getchar();
        cout << "Digite o seu nome"<<endl;
            getline(cin,funcionario[i].nome);
        cout << "Digite a quantidade de horas que voce trabalha"<<endl;
        cin >> funcionario[i].horas;
            getchar();
        cout << "Digite sua quantidade de dependentes "<<endl;
        cin >> funcionario[i].dependentes;
    }
    for(i=0;i<qtd;i++){
        salariobruto[i]=(funcionario[i].horas*12)+(funcionario[i].dependentes*40);
        salario[i]=salariobruto[i]-(salariobruto[i]*0.135);
        ir[i]=salariobruto[i]*(0.085);
        inss[i]=salariobruto[i]*(0.05);
    }
    for(i=0;i<qtd;i++){
        cout <<funcionario[i].nome<<endl;
        cout <<funcionario[i].horas<<endl;
        cout<<funcionario[i].dependentes<<endl;
        cout<<salariobruto[i]<<endl;
        cout<<salario[i]<<endl;
        cout<<"O desconto do INSS foi de"<<inss[i]<<" "<<endl;
        cout <<"O desconto do IR foi de"<<ir[i]<<" "<<endl;
    }


}