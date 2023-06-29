// 11. Elabore um algoritmo que apresente o menu abaixo e, de acordo com a opção
// escolhida pelo usuário, realize a respectiva operação conforme detalhamento.
// -------------------------------------------------------
//  MENU PRINCIPAL
// -------------------------------------------------------
// 1 - ORDEM
// 2 - DATA
// 3 - SALÁRIO
// 4 - MULTA
// 5 - CALCULAR
// 6 - SAIR
// -------------------------------------------------------
// Opção 1: leia três valores inteiros e um char (‘c’ – crescente, ‘d’ – decrescente), passeos
// para uma função que deverá ordená-los de acordo com a ordem escolhida e retorná-los
// para o chamador, que deverá escrever o resultado da ordenação.
// Opção 2: Declare o registro Data contendo 3 campos inteiros, dia, mês e ano, e leia 5
// datas em um vetor de datas. Passe o vetor lido para uma função que que deverá verificar
// e retornar um vetor booleano contendo true em cada posição cuja data for válida e false
// em cada posição que a tada não for válida. Considerar meses de 30 e 31, desconsiderar
// anos bissextos. O chamador, após receber o resultado da função, deverá escrever uma
// mensagem de “Data Válida” ou “Data Válida” para cada resultado recebido no vetor.
// Exemplo: Vetor de Datas: 21/1/2000, 31/12/2012, 45/3/2000, 1/40/2000, 31/02/1999
// Saída da função: true, true, false, false, false
// Opção 3: leia o salário de uma pessoa e a sua quantidade de filhos e mande-os para uma
// função. A função deverá retornar quanto do salário da pessoa será dedicado a cada um
// dos seus filhos (considerando 10% para cada filho, desde que não exceda o 50% do valor
// total do salário. Se exceder, o valor para cada filho deverá ser 50% do salário dividido
// pelo total de filhos. O chamador deverá informar o valor do salário por filho ou, se a
// pessoa não tiver filhos, a mensagem “O seu salário é 100% para o seu próprio custeio”.
// Opção 4: leia a velocidade máxima permitida em uma avenida e a velocidade com que o
// motorista estava dirigindo nela, envie-os para uma função void que deverá calcular se a
// pessoa vai pagar multa e, se for, qual o valor da multa. Considere que serão pagos como
// multa: a) 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex.:
// velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); b) 100 reais, se o
// motorista ultrapassar de 11 a 30 km/h a velocidade permitida. c) 200 reais, se estiver
// acima de 31km/h da velocidade permitida. A mensagem informando o valor da multa
// deverá ser escrita pelo chamador após a execução da função.
// Opção 5: leia o gabarito correto de uma prova e o gabarito de um aluno em uma matriz
// 2x10 (10 respostas do gabarito na primeira linha da matriz e 10 repostas do aluno na
// segunda linha da matriz) e envie para uma função. A função deverá calcular e retornar o
// percentual de acerto do aluno na prova (int) e a sua nota (float), considerando que cada
// questão vale 1,5 ponto. Escreva os resultados retornados pela função.
// Opção 6: Escreva a mensagem “Fim de Programa” e encerre o algoritmo.

#include <iostream>
using namespace std;
int* ordenacao(int *vetor, char ordem);
struct Tdata{
    int dia,mes,ano;
};
struct Tacertos{
    int acertos;
    float nota;
};
bool* data1(Tdata *data,bool *valido);
float* dedi(float salario, int filhos,float *filhos1);
void velocid(float maxa, float velomo ); 
Tacertos contagem(char(&gabarito)[2][10]);
int main(){
    int escolha, *ordemn,vetorO[3],i,qtdf,j;
    char ordem;
    Tdata data[5];
    bool *valido1,valido[5];
    float salario,max,velocidade,filhos1[qtdf];
    float *dedicado;
    char gabarito[2][10];
    Tacertos pontos;
    do{
        cout << "MENU PRINCIPAL"<<endl;
    cout << "1- ORDEM "<<endl;
    cout << "2- DATA "<<endl;
    cout << "3- SALARIO "<<endl;
    cout << "4- MULTA "<<endl;
    cout << "5- CALCULAR"<<endl;
    cout << "6- SAIR   "<<endl;
    cin >> escolha;
        switch (escolha ){
        case 1:
        cout << "Digite a ordem  que voce quer "<<endl;
            cin >> ordem;
        for(i=0;i<3;i++){
            cout << "Digite o numero da posicao "<<i<<" do vetor"<<endl;
                cin >> vetorO[i];

        }
        ordemn=ordenacao(vetorO,ordem);
        for(i=0;i<3;i++){
            cout << *(ordemn+i);
        }
        break;
        case 2:
        for(i=0;i<5;i++){
            cout << "Digite o dia "<<"da data "<<i<<endl;
                cin >> data[i].dia;
            cout << "Digite o mes "<<"da data "<<i<<endl;
                cin >> data[i].mes;
            cout << "Digite o ano "<<"da data "<<i<<endl;
                cin >> data[i].ano;
        }
        valido1=data1(data,valido);
        for(i=0;i<5;i++){
            if(*(valido+i)==1){
                cout <<"A data digitada é "<<"TRUE"<<endl;
            }else{
                cout << "A data digitada é "<<"FALSE "<<endl;
            }
            
            
        }
        break;
        case 3:
        cout << "Digite o seu Salario "<<endl;
            cin >> salario;
        cout << "Digite a quantidade de filhos que voce tem "<<endl;
            cin >>qtdf;
            if(qtdf==0){
                cout << "O seu salario é 100% dedicado a voce "<<endl;
            }else{
                dedicado=dedi(salario,qtdf,filhos1);
                for(i=0;i<qtdf;i++){
                    cout << dedicado[i]<<" "<<endl;
                }
            }
        break;
        case 4:
        cout << "Digite a velocidade maxima de uma rodovia "<<endl;
            cin >> max;
        cout << "Digite a velocidade que voce estava da rodovia "<<endl;
            cin >> velocidade;
        velocid(max,velocidade);
        break;
        case 5:
        for(i=0;i<2;i++){
            for(j=0;j<10;j++){
                if(i<1){
                    cout << "Digite a as alternativas certas do gabarito para cada questao"<<j<<endl;
                    cin >> gabarito[i][j];
                }else{
                    cout << "Digite a alternativa assinalada pelo aluno nessa questao "<<j<<endl;
                    cin >> gabarito[i][j];
                }
                
                
            }
           
                
        }
        pontos=contagem(gabarito);
        cout << "A quantidade de acertos foi de "<<pontos.acertos<<endl;
        cout << "A sua Nota foi de "<<pontos.nota<<endl;
        break;
        case 6:
        cout << "Encerrar o progama "<<endl;
        break;
        default:
        cout << "Comando invalido"<<endl;
        break;
        }

    }while(escolha!=6);
    return 0;
}
int* ordenacao(int *vetor,char ordem){
    int i,j,menor=vetor[0],maior=vetor[0],indice,indice2,menor2=vetor[0];
    for(i=0;i<3;i++){
        if(vetor[i]<menor){
            menor=vetor[i];
            indice=i;

        }

    }
    vetor[indice]=vetor[0];
    for(i=1;i<=2;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
            indice2=i;
        }
        if(vetor[i]<menor2){
            menor2=vetor[i];
        }

    }
    if(ordem=='c'){
        vetor[0]=menor;vetor[1]=menor2;vetor[2]=maior;
        return vetor;
    }else{
        vetor[2]=menor;vetor[0]=maior;vetor[1]=menor2;
        return vetor;
    }
};
bool* data1(Tdata *data,bool*valido1){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if((data[i].dia>31) || (data[i].dia<0)){
            valido1[j]=false;
        }
        if((data[i].dia>28) && (data[i].mes==2)){
            valido1[j]= false;
        }else{
            if(data[i].mes>12){
                valido1[j]= false;
            }else{
                valido1[j]= true;
                }
            }
        }
        
    }
    return valido1;
};
float* dedi(float salario,int filhos,float *filhos1){
    int i;
    if(filhos<=5){
        for(i=0;i<filhos;i++){
            filhos1[i]=(salario*0.1);
        }

    }else{
        if(filhos>5){
            for(i=0;i<filhos;i++){
                filhos1[i]=(salario*0.5)/filhos;
            }
        }
    }



    return filhos1;

    
   
};
void velocid(float max,float velocidade){
    float valor;
    float limite=velocidade;
    if(velocidade<=max){
        cout << "Nao sera pago nenhuma multa "<<endl;
    }else{
        if(velocidade>max){
            limite=velocidade-max;
            if(limite<=10){
                valor=50;
                cout << "O valor da multa é de "<<valor<<" R$"<<endl;
            }else{
                if((limite>10) || (limite<=30)){
                    valor=100;
                    cout << "O valor da multa é de "<<valor<<" R$"<<endl;
                }else{
                    valor=200;
                    cout <<"O valor da multa é de "<<valor<<" R$"<<endl;

                }
            }

        }
    }

};
Tacertos contagem(char (&gabarito)[2][10]){
    Tacertos pontos;
    int i,j,contador=0;
    float nota;
    char gabarito1[10],resaluno[10];
    for(i=0;i<10;i++){
        gabarito1[i]=gabarito[0][i];
    }
    for(i=0;i<10;i++){
        resaluno[i]=gabarito[1][i];
    }
    for(i=0;i<10;i++){
        if(gabarito1[i]==resaluno[i]){
            contador++;
        }
    }
    nota=1.5*(contador);
    pontos.nota=nota;
    pontos.acertos=contador;
    return pontos;

};
