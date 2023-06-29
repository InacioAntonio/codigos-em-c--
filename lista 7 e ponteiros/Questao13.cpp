//13. Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de
// duas variáveis inteiras, min e max, e deposite nessas variáveis o valor do menor
// elemento (mínimo) e do maior elemento (máximo) do vetor. Elabore um algoritmo que
// teste a função mm. 

#include <iostream>
using namespace std;
void funmm(int v[],int *min,int *max,int n);

int main(){
    int min,max,n,i;
    cout << "Digite o valor de n que sera o tamanho do vetor "<<endl;
        cin >> n;
    int v[n];
    for(i=0;i<n;i++){
        cout << "Digite o valor de vetor da posicao"<<i+1<<" "<<endl;
            cin >> v[i];
    }
    funmm(v,&min,&max,n);
}
void funmm(int v[],int *min,int * max,int n){
    *min=99999;
    int i;
    *max=v[0];
    for(i=0;i<n;i++){
        if(v[i]>*max){
            *max=v[i];
        }
        if(v[i]<*min){
            *min=v[i];
        }
    }
    cout << "O minimo é de "<<*min<<" "<<endl;
    cout << "O maior é de "<<*max<<" "<<endl;
};
