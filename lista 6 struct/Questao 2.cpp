// Elabore um algoritmo que
// - Crie a estrutura tAnimal: Registro tAnimal:
// nome: string
// raca: string
// idade: int
// - Declare um vetor Animais (5 posições de tAnimal) e cadastre 8 animais;
// - Verifique e escreva o nome do animal mais velho;
// - Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para
// a busca. Se ele quiser, leia uma raça e, se existir animal da raça procurada, informe seus
// dados (nome e idade); 

#include <iostream>
#include <string>
using namespace std;

struct tanimais{
    string nome;
    string raca;
    int idade;

};

int main (){
    tanimais animais[8];
    int i,qtd,velho=0;
    string tipo,no;
    bool encontrado;

    do{
        cout << "Quantos animais deseja cadastrar "<<endl;
        cin >> qtd;
    }while(qtd>5 || qtd<=0);
    for(i=0;i<qtd;i++){
        getchar();
        cout << "Escreva um nome para o animal "<<endl;
        getline(cin,animais[i].nome);
        cout << "Escreva um nome para a raca "<<endl;
        getline(cin,animais[i].raca);
        cout << "Digite a idade do animal "<<endl;
        cin >> animais[i].idade;
        if(animais[i].idade>velho){
            velho=animais[i].idade;
            no=animais[i].nome;
        }
        
        //getchar();
    }
    getchar();
    cout << "buscar de algum animal pela raca dele "<<endl;
        cin >>tipo;

    for(i=0;i<qtd;i++){
        if(animais[i].raca==tipo){
            cout <<animais[i].nome<<endl;
            cout <<animais[i].idade<<endl;
            encontrado=true;
        }
    }
    if(!encontrado){
        cout << "A raca do Animal digitado não existe"<<endl;
    }
cout << "O nome  do animal mais velho é de : "<<no<<endl;

}