// Escreva uma função que determine a média e a situação de um aluno em uma
// disciplina. A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3),
// seu número de faltas (faltas), o número total de aulas da disciplina (aulas) e o ponteiro
// para uma variável (media), conforme a seguinte assinatura:
// char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media); Na
// variável indicada pelo ponteiro media, a função deve armazenar a média do aluno,
// calculada como a média aritmética das três provas. Além disso, a função deve retornar
// um caractere indicando a situação do aluno no curso, definido de acordo com o seguinte
// critério:
// Número de Faltas Média Situação Retorno
// Menor ou igual a 25% do total
// de aulas
// Maior ou igual a
// 6,0
// Aprovado A
// Menor que 6,0 Reprovado R
// Maior que 25% do total de
// aulas
// Qualquer Reprovado por
// faltas
// F
// Em seguida, escreva a função principal de um programa que utiliza a função anterior para
// determinar a situação de um aluno. O programa deve:
// - Ler do teclado três números reais e dois números inteiros, representando as
// notas da p1, p2 e p3, o número de faltas e o número de aulas, respectivamente;
// - Chamar a função desenvolvida na primeira questão para determinar a média e a
// situação do aluno na disciplina;
// - Exibir a média (com apenas uma casa decimal) e a situação do aluno, isto é,
// “APROVADO”, “REPROVADO” ou “REPROVADO POR FALTAS”, dependendo do caractere
// retornado pela função, conforme a tabela acima. 

#include <iostream>
using namespace std;
char  media1(float p1 , float p2 , float p3, int faltas , int qtdaulas , float* media );

int main(){
    float nota1,nota2,nota3,mediaf;
    float media;
    int falta,qtdaulas;
    char passou;

    cout << "Digite a sua nota 1 "<<endl;
        cin >> nota1;
    cout << "Digite a sua nota 2 "<<endl;
        cin >> nota2;
    cout << "Digite a sua nota 3 "<<endl;
        cin >> nota3;
    cout << "Digite a sua Quantidade de faltas "<<endl;
        cin >> falta;
    cout << "Digite a Quantidade de aulas dessa disciplina "<<endl;
        cin >> qtdaulas;
    
    passou=media1(nota1,nota2,nota3,falta,qtdaulas, &media);
    switch(passou){
        case 'a':
        cout << "APROVADO "<<endl;
        break;
        case 'r':
        cout << "REPROVADO "<<endl;
        break;
        case 'f':
        cout << "REPROVADO POR FALTAS "<<endl;
        break;
        default:
        cout << "ERRO "<<endl;
    }
    
    
}
char media1(float p1,float p2,float p3, int faltas , int qtdaulas, float *media){
        float mediafinal=(p1+p2+p3)/3;
        *media=mediafinal;
        float porcento=(qtdaulas)*(0.25);
    if((mediafinal>=6 ) && (faltas<porcento)){
        return 'a';
    }else{
        if(mediafinal<6 && (faltas<porcento)){
            return 'r';
        }else{
            if(faltas>porcento){
                return 'f';
            }
        }
    }
};

