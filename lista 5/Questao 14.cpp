//Elabore um algoritmo que leia uma matriz 4x5 de números reais. Em seguida, calcule a soma dos elementos
//de cada coluna, armazenando o resultado da soma em um vetor de 5 elementos. Escreva a matriz e o vetor.
#include<iostream>
using namespace std;

int main(){
    int const t1=4,t2=5;
    int matriz[t1][t2],vetor[t2],i,j,soma=0;

    for(i=0;i<t1;i++){
        for(j=0;j<t2;j++){
            cin >> matriz[i][j];
            soma=matriz[i][j==i]+matriz[i][j==i];
            vetor[j]=soma;
        }
    }
    for(j=0;j<t2;j++){
        cout << vetor[j]<<" "<<endl;
    }
}