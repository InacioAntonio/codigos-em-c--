// Escreva uma função que receba como parâmetros dois vetores de inteiros: x1 e
// x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar
// um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de
// x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1 = {1, 3, 5, 6, 7} e
// x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. Assinatura da função:
// int* uniao(int *x1, int *x2, int n1, int n2, int* qtd); 

#include <iostream>
using namespace std;
int* uniao(int *x1,int *x2,int n1,int n2,int *qtd);
int main(){
    int n1,n2,i,j;
    cout << "Qual o tamanho do vetor de x1 e x2 "<<endl;
        cin >> n1 >> n2;
    int x1[n1],x2[n2],qtd,*tam,x3[qtd];
    for(i=0;i<n1;i++){
        cout << "Digite o elemento da posicao "<<i+1<<" do vetor x1"<<endl;
            cin >> x1[i];
    }
    for(i=0;i<n2;i++){
        cout << "Digite o elemento da posicao "<<i+1<<" do vetor x2"<<endl;
            cin >> x2[i];
    }
    tam=uniao(x1,x2,n1,n2,&qtd);
    for(i=0;i<qtd;i++){
        cout << *(tam+i);
    }


}
int* uniao(int *x1,int *x2,int n1,int n2,int *qtd){
    *qtd=0;
    int i,j,tam=0,b;
    bool diff=false;
    for(i=0;i<n1;i++){
        if(x1[i]==x2[i]){
            tam++;
        }else{
            tam++;
        }

    }
    *qtd=tam;
    int x3[*qtd];
    for(i=0;i<*qtd;i++){
        for(j=0;j<n1;j++){
            for(b=0;b<n2;b++){
                if(x1[j]==x2[b]){
                    x3[i]=x1[j];
                }else{
                    x3[i]=x2[b];
                }
            }
        }
    }
    return x3;

};
