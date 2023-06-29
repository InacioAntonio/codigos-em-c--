// 14. Escreva uma função que receba uma string e uma letra e retorne um vetor de
// inteiros contendo as posições (índices no vetor da string) onde a letra foi encontrada e
// um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas).
// Utilize o retorno de um vetor para retornar os índices e um ponteiro para guardar o
// tamanho do vetor. Elabore um algoritmo que teste a função supracitada. 

#include <iostream>
using namespace std;

struct funcao{
    int tamanho;//tamanho do vetor
    int vetor[9999];
};
funcao func(string palavra,char letra);

int main(){
    string palavra;
    char letra;
    int i;
    funcao resposta;
    cout << "Digite uma palavra "<<endl;
        getline(cin,palavra);
    cout << "Digite a letra "<<endl;
        cin >> letra;
    resposta=func(palavra,letra);

    for(i=0;i<resposta.tamanho;i++){
        cout << resposta.vetor[i]<<" ";
    }
}
funcao func(string palavra,char letra){
    int i,posicao=0;
    funcao ponto;
    int tam=0;
    for(i=0;i<palavra.length();i++){
        if(letra==palavra[i]){
            ponto.vetor[posicao]=i;
            tam++;
            posicao++;

        }
    }
    ponto.tamanho=tam;
    return ponto;
};

