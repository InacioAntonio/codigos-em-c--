// Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada
// considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um
// algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize
// duas funções: uma que determine o maior valor entre as notas (de provas ou de
// trabalhos) e outra que calcule a média aritmética das duas maiores notas.

#include <iostream>
using namespace std;
float funcaoMaior1(float notaT1 , float notaT2 );
float funcaomedia1(float maior1 , float maior2  );

int main(){
    float media,notaT1,notaT2,notaP1,notaP2,maior1,maior2;

    cout << "Digite sua nota primeiro trabalho "<<endl;
        cin >> notaT1;
    cout << "Digite a sua nota no segundo trabalho "<<endl;
        cin >> notaT2;
    cout << "Digite a sua nota da primeira prova "<<endl;
        cin >> notaP1;
    cout << "Digite a sua nota da segunda prova "<<endl;
        cin >> notaP2;
    maior1 = funcaoMaior1(notaT1, notaT2);
    maior2 = funcaoMaior1(notaP1,notaP2);
    media = funcaomedia1(maior1, maior2);

    cout << "A media foi de : "<<media<<" "<<endl;
        
}
float funcaoMaior1(float notaT1, float notaT2){
    float maior=0;
    if(notaT1>maior)
        maior=notaT1;
    else{
        if(notaT2>maior )
            maior=notaT2;
    }

   
    return maior;

};
float  funcaomedia1( float maior, float maior2){
    
    float media= (maior+maior2)/2;
    return media;
};
