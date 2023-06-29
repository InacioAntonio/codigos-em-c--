#include <iostream>
#include <string> 
using namespace std;
struct Taluno{
    int matricula; 
    float media;
    Taluno* proximo; 
};

int main(){
    int resposta,auxmatricula;
    bool primeiravez =true; 
    Taluno *p,*inicio, *antigoUltimo, *aux,*fim;
    cout << "Cadastrando Alunos ... "<<endl;
    do{
        p = (struct Taluno*) malloc(sizeof(struct Taluno ));
        cout << "Digite a matricula: ";
        cin >> p ->matricula;
        cout << "Digite a media: ";
        cin >> p ->media;

        if(primeiravez){
            inicio=p;
            p->proximo = NULL;
            primeiravez = false;
        }else{
             p->proximo = NULL;
            while(antigoUltimo->proximo != NULL){
                antigoUltimo= antigoUltimo->proximo;
            }
           
            antigoUltimo = antigoUltimo->proximo;
            
        }
            cout << "Deseja continuar 0 para sim e 1 para não "<<endl;
            cin >> resposta;

    }while(resposta!=1);
    
    cout << "Escrevendo os alunos cadastradso "<<endl;
    aux =inicio;

    do{
        cout << "A matricula é " << aux->matricula <<endl;
        cout << " Media : "<<aux->media;

        aux = aux->proximo;

    }while (aux!=NULL);
    cout << "Deseja adicionar mais algum aluno ?  digite 1 para  sim e 2 para nao"<<endl;
    cin >> resposta;
    if(resposta==1){
        do{
            p = (struct Taluno*) malloc(sizeof(struct Taluno ));
            cout << "Digite o seu numero de matricula "<<endl;
            cin >> p->matricula;
            cout << "Digite a sua media "<<endl;
            cin >> p->media;
            p->proximo = NULL;
            while(fim->proximo != NULL){
                fim=fim->proximo;
            }
            fim->proximo=p;
            cout << "Deseja continuar  1 para sim e 0 para nao "<<endl;
            cin >> resposta;
        }while(resposta!=1);
        cout << "A nova lista cadastrada :"<<endl;
        aux=inicio;
        do{
            cout <<"A matricula é " << aux->matricula <<endl;
            cout << " Media : "<<aux->media <<endl;

        }while(aux!=NULL);

    }
    else{
        cout << "Digite qual numero de matricula  voce deseja apagar  "<<endl;
        cin >> auxmatricula;
        aux = inicio;
        antigoUltimo = NULL;

        do{
            if(auxmatricula==aux->matricula){
                if(antigoUltimo == NULL){
                    inicio=aux->proximo;
                }else{
                    antigoUltimo->proximo = aux->proximo;
                }

                free(aux);
            cout << "Matricula removida com sucesso"<<endl;
            break;
            }
            antigoUltimo = aux;
            aux = aux->proximo;
            

        }while(aux!=NULL);
    }
    if(aux == NULL){
        cout << "Matricula não encontrada ."<<endl;
    }
    
    
}