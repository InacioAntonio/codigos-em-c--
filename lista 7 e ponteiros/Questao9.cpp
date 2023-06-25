// Crie um algoritmo para manipular vetores. O seu programa deve implementar
// uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2,
// ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem
// inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos
// para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar
// o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int
// inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main.

#include <iostream>
using namespace std ;
int invertevetor(int *v1 , int *v2, int n);

int main(){
    int n,v1[n],v2[n],i,j;
    int maior;

    cout << "Qual tamanho sera os vetores 1 e 2 "<<endl;
        cin >> n;
    for(i=0;i<n;i++){
        cout << "Digite o valor da posicao "<<i<<" do vetor 1"<<endl;
            cin >> v1[i];
    }
    maior=invertervetor(&v1[n] , &v2[n] ,n);

    cout << "O maior valor do vetor 1 é "<<maior<<" "<<endl;
   

}
int invertervetor(int *v1 , int *v2, int n){
    int i,j,maior=0;
    for(i=n;i>=0;i--){
        for(j=0;j<n;j++){
            v2[j]=v1[i];
        }
        if(v1[i]>maior){
            maior=v1[i];
        }
    }
    return maior;
};
