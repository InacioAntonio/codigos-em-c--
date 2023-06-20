#include <iostream>
#include <string> 
using namespace std;
struct Taluno{
    int matricula; 
    float media;
    Taluno* proximo; 
};

int main(){
    int resposta;
    bool primeiravez =true; 
    Taluno *p,*inicio, *antigoUltimo, *aux;
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
    
}