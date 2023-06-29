// 17. Escreva um programa que leia números 10 inteiros, armazene-os em um vetor e
// os escreva na ordem contrária à de leitura. Obs: todos os acessos ao vetor devem ser
// feitos usando somente ponteiros, sem usar os índices. 
#include <iostream>
using namespace std;
int* inverte(int *vetor, int *inverte);

int main(){
    int *p,vetor[10],i,inverte1[10];
    for(i=0;i<10;i++){
        cin >> vetor[i];
    }
    p=inverte(vetor,inverte1);
    for(i=0;i<10;i++){
        cout << *(p+i);
    }
}
int *inverte(int *vetor, int  *inverte1){
    int i=0,j;
    for(j=9;j>=0;j--){
       *(inverte1+i)=*(vetor+j);//inverte o vetor so usando ponteiros pq um vetor ja e um ponteiro 
       
       i++;
    }
    return inverte1;

}