// Elabore um algoritmo que:
// - Crie o registro tAluno:
// Registro tAluno:
// nome: string
// matriculaDoAluno: int
// - Declare um vetor Alunos (3 posições de tAluno) e cadastre 3 alunos no vetor Alunos;

#include <iostream>
#include <string>
using namespace std ;

struct Taluno{
    string nome;
    int matricula;

};
 struct Tdisciplina{
        int  matricula;
        string disciplina;
        float nota1,nota2,nota3,media;
    };

int main (){
    int i,qtd,auxqtd,auxmatricula,j,escolha,auxmatr,i2=0;
    Taluno aluno[3];
    Tdisciplina disciplina[12];
    bool achou=false;
    float maior=0,soma=0,auxsoma[10],auxmedia[10],media2,media3;
    string auxdis,auxaluno;
    qtd=3;
    for(i=0;i<qtd;i++){
        getchar();
        cout << "Digite o seu nome "<<endl;
            getline(cin,aluno[i].nome);
            //getchar();
        cout << "Digite o seu numero de matricula "<<endl;
            cin >> aluno[i].matricula;
    }
    for(i=0;i<4;i++){
        getchar();
        cout << "Digite o seu numero de matricula "<<endl;
            cin >> disciplina[i].matricula;
        cout << "Digite o nome da disciplina "<<endl;
            getchar();
            getline(cin,disciplina[i].disciplina);
        cout << "Digite a suas notas "<<endl;
        cin >> disciplina[i].nota1 >> disciplina[i].nota2 >> disciplina[i].nota3;
        disciplina[i].media=(((disciplina[i].nota1)+(disciplina[i].nota2)+(disciplina[i].nota3))/3);
        if(disciplina[i].media>maior){
            maior=disciplina[i].media;
            auxdis=disciplina[i].disciplina;
            auxmatr=disciplina[i].matricula;
        }

    }
    do{
        achou=false;
        cout << "-----------Menu"<<endl;
        cout << "1- Exibir os dados de um aluno"<<endl;
        cout << "2- Exibir Maior média "<<endl;
        cout << "3- Exibir a media da media dos alunos"<<endl;
        cout << "4- Exibir os Alunos de uma disciplina"<<endl;
        cout << "5- Sair do sistema "<<endl;
        cin >> escolha;
        switch(escolha){
            case 1:
            cout << "Digite o numero de matricula do aluno que voce deseja ver os dados "<<endl;
            cin >> auxmatricula;
            for(i=0;i<qtd;i++){
                if(auxmatricula==aluno[i].matricula){
                achou=true;
                cout << aluno[i].nome<<endl;
                cout << aluno[i].matricula<<endl;

                }
            }
            for(i=0;i<4;i++){
                    if(auxmatricula==disciplina[i].matricula){
                    cout <<disciplina[i].disciplina<<endl;
                    cout << disciplina[i].nota1<<" Nota 1"<<endl;
                    cout << disciplina[i].nota2<<" Nota 2 "<<endl;
                    cout << disciplina[i].nota3<<" Nota 3 "<<endl;
                    cout << disciplina[i].media<<" Media "<<endl;
                     }
        }
        if(!achou){
            cout << "O numero de matricula digitado ainda não foi cadastrado"<<endl;
        }
        break;
        case 2:
        cout << "O a matricula do aluno com a maior media é de  "<<auxmatr<<endl;
        cout << "A disciplina foi a de: "<<auxdis;
        break;
        case 3:
        soma=0;
        achou=false;
        for(j=0;j<qtd;j++){
            soma=0;
            for(i=0;i<4;i++){
                if(disciplina[i].matricula==aluno[j].matricula){
                achou=true;
                soma+=disciplina[i].media;
                }
            }
            if(achou){
                cout <<aluno[j].nome;
            }
             media2=soma/4;
            cout << "A media da media do aluno é de "<<media2<<" "<<endl;
        }
       
        
        
        break;
        case 4:
        achou=false;
        getchar();
        cout << "Qual disciplina voce deseja ver quantos alunos estao cadastrados"<<endl;
            getline(cin,auxdis);
        for(i=0;i<qtd;i++){
            for(j=0;j<4;j++){
                if(auxdis==disciplina[j].disciplina){
                    achou=true;
                    if(aluno[i].matricula==disciplina[j].matricula){
                        cout << aluno[i].nome<<endl;
                        cout << aluno[i].matricula<<endl;
                    }

                }
            }
        }
        if(!achou){
            cout << "A materia digitada não existe"<<endl;
        }
        break;
        case 5: cout << "Fim do progama"<<endl;
        break;
        default: cout <<  "Opcao Invalida "<<endl;
        }
    }while(escolha!=5);
    
    


}