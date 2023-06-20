// Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome,
// endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de
// todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final.

#include   <iostream>
#include    <string>
using namespace std;

struct taluno{
    int matricula;
    float media;
    string endereco;

};
int main(){
    taluno aluno[10];
    int i,qtd;
    float mediaF;
    do{
        cout << "Quantos alunos vai registrar ?"<<endl;
        cin >> qtd;
    }while(qtd>10 && qtd<0);
    for(i=0;i<qtd;i++){
        getchar();
        cout << "Digite a matricula do aluno"<<endl;
        cin >> aluno[i].matricula;
        cout << "Digite a media do aluno "<<endl;
        cin >> aluno[i].media;
        cout << "Digite o endereco do aluno"<<endl;
        getchar();
        getline(cin,aluno[i].endereco);
    }
    for(i=0;i<qtd;i++){
        if(aluno[i].media>5){
            mediaF=(aluno[i].media)+0.5;
            cout << "Sua media foi de: "<<mediaF<<" "<<endl;
        }else{
            cout << "Sua media foi de: "<<aluno[i].media<<" "<<endl;
        }
    }
}