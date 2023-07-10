//Urubu do Pix

#include <iostream>
#include <string>
using namespace std;
struct Tpessoa{
    string nome;
};
Tpessoa *criarpessoa(Tpessoa p[]);
float *rich(float saldo[],Tpessoa p[]);
int main(){
    int opcao,i,sacador;
    Tpessoa p[50],*ponteiro;
    float saldo[50]={0,0,0,0,0,0,0},deposito[50],saque,*saldor;
    bool achou=false;
    string auxnome;
        ponteiro=criarpessoa(p);//eu acho que essa linha ta errada so jesus sabe
    
    do{
        cout << "Menu "<<endl;
        cout << "1 Depositar  "<<endl;
        cout << "2 Sacar "<<endl;
        cout << "3 Visualizar o saldo após o rendimento "<<endl;
        cout << "4 sair "<<endl;
        cin >> opcao;
        switch(opcao){
            case 1:
            for(i=0;i<3;i++){
                    cout << "Quanto o usuario " << p[i].nome <<" Deseja depositar ? "<<endl;
                    cin >> deposito[i];
                    saldo[i]+=deposito[i];
                    
                }
                saldor=rich(saldo,p);
            break;
            case 2:
            cout << "Digite o seu nome "<<endl;
                getchar();
                getline(cin,auxnome);
            for(i=0;i<3;i++){
                for(int j=0;j<p[i].nome.length();j++){
                string pedaco=p[i].nome.substr(j,p[i].nome.length());
                    if(pedaco==auxnome){
                        sacador=i;
                        achou=true;
                    }
                }  

            }
            if(achou){
                cout << "Quanto voce deseja sacar ? "<<endl;
                    cin >> saque;
                saldo[sacador]=saldo[sacador]-saque;
                cout << "O seu saldo novo agora é de  "<<saldo[sacador]<<endl;
            }else{
                cout << "O nome digitado é Invalido"<<endl;
            }
            
            break;
            case 3:
            achou=false;
            cout << "Digite o seu nome para visualizar seu saldo "<<endl;
                getchar();
                getline(cin,auxnome);
            for(i=0;i<3;i++){
                for(int j=0;j<p[i].nome.length();j++){
                    string pedaco=p[i].nome.substr(j,p[i].nome.length());
                    if(pedaco==auxnome){
                        achou=true;
                        cout << p[i].nome;
                        cout << *(saldor+i);


                    }
                }

            }
            if(!achou){
                cout << "O nome digitado é Invalido"<<endl;
            }
            break;
            default :
            cout << "Opcao Invalida "<<endl;
            break;
        }
    }while(opcao !=4);
    

    
}
Tpessoa *criarpessoa(Tpessoa p[]){
    int i;
    for(i=0;i<3;i++){
        getline(cin,p[i].nome);
    }
    return p;
    

};
float *rich(float saldo[],Tpessoa p[]){
    int i;
    for(i=0;i<3;i++){
        float redimento=(saldo[i]*0.3333);
         saldo[i]=redimento+saldo[i];
    }
    return &saldo[0];
   

};


