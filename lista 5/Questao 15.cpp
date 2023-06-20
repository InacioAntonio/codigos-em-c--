//Elabore um algoritmo que leia uma matriz 3x3 e gere automaticamente uma nova matriz que seja a matriz
//transposta da primeira (troque as linhas por colunas).
#include <iostream>
using namespace std;

int main(){
    int matriz[3][3],novo[3][3],i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin >> matriz[i][j];
            novo[j][i]=matriz[i][j];

        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout <<matriz[i][j];
        }
        cout <<endl;
    }

}