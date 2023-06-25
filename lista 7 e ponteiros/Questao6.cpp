// Elaborar um algoritmo que leia um vetor de 10 posições de inteiros e chame uma
// função MinMax. Esta função deve receber o vetor lido e, por referência, duas variáveis
// inteiras, min e max. O objetivo da função é buscar os valores do menor e maior
// elementos do vetor e atribuir às variáveis min e max respectivamente.

#include <iostream>
using namespace std ;

int minmax(int* vetor, bool achou );

int main(){
    int vetor[10],min,max,i;
    bool achou=false;


    for(i=0;i<4;i++){
        cout << "Digite a os valores do vetor "<<" na posicao "<<i<<endl;
            cin >> vetor[i];
    }
    
        min =minmax(vetor, achou=false);
        max =minmax(vetor, achou=true );
    cout << "O valor minimo é de "<<min<<" "<<endl;
    cout << "O valor maximo é de "<<max<<" "<<endl;


    


    
}
int minmax(int* vetor , bool achou ){
    int max[10],min[10],minimo=vetor[0],maximo=vetor[0],i;
    for(i=0;i<4;i++){
        //max[i]=vetor[i];
        //min[i]=vetor[i];
        if(maximo<vetor[i]){
            maximo=vetor[i];
        }
        if(minimo>vetor[i]){
            minimo=vetor[i];
        }

    }
    if(!achou ){
        return minimo;
    }else{
        return maximo;
    }
   
    
   
};
