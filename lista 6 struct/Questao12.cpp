// 2. Elabore um registro que represente corretamente uma conta bancária de uma pessoa
// contendo os campos “número do banco”, “número da agência”, “número da conta”, “nome
// do cliente”, “senha” e “saldo atual” e um vetor capaz de armazenar 100 contas. Leia os dados
// de N contas e, após a leitura, mostre uma tela com as opções “entrar” ou “sair”. Se o usuário
// escolher “entrar”, ele deverá digitar o número da conta e a senha. O algoritmo deverá
// localizar a conta no vetor e, se a senha estiver correta, mostrar um menu com as opções de
// “saque”, “depósito”, “saldo” e “voltar a tela anterior”. A opção que o usuário escolher deverá
// ser executada pelo sistema e, em seguida, esta mesmo menu de opções deverá ser exibido
// novamente. Se a senha estiver incorreta ou a conta não existir, o sistema deverá informar a
// mensagem “erro de busca”. Somente quando o usuário escolher “sair”, o sistema deverá
// finalizar.

#include <iostream>
#include <string>
using namespace std;
struct Tconta{
    string numbanco;
    string numconta;
    string numagencia;
    string nome;
    string senha;
    float saldo;

};
int main(){
    Tconta conta[100];
    int i,qtd;
    string auxsenha,auxnumconta;
    bool achou=false;
    int opcao;
    float saque,deposito;
    string escolha;
    do{
        cout << "Deseja registrar quantas contas bancarias "<<endl;
        cin >> qtd;
    }while(qtd<0 || qtd>100);
    for(i=0;i<qtd;i++){
        getchar();
        cout << "Digite o numero que sua conta vai ter "<<endl;
            getline(cin,conta[i].numconta);
        cout << "Digite o numero que seu banco vai ter "<<endl;
            getline(cin,conta[i].numbanco);
            //getchar();
        cout << "Digite o numero da sua agencia bancaria que ela vai ter"<<endl;
            getline(cin,conta[i].numagencia);
            //getchar();
        cout << "Digite o seu nome "<<endl;
            getline(cin,conta[i].nome);
            //getchar();
        cout << "Digite a senha que sua conta vai ter "<<endl;
            getline(cin,conta[i].senha);
            //getchar();
        cout << "Digite o seu saldo atual "<<endl;
            cin >> conta[i].saldo;
        
    }
    getchar();
    cout << "Digite se voce deseja entrar ou sair da sua conta "<<endl;
        getline(cin,escolha);
        
    if(escolha=="entrar"){
        do{
            getchar();
        cout << "Digite o numero da sua conta "<<endl;
            getline(cin,auxnumconta);
        cout << "Digite a sua senha para continuar "<<endl;
            getline(cin,auxsenha);
        for(i=0;i<qtd;i++){
            if((auxnumconta==conta[i].numconta )&& (auxsenha==conta[i].senha)){
                //imprimir os dados bancarios se tiver correto;
                achou=true;
            }
           
        }if(achou){
                    do{
                cout << "------Menu"<<endl;
                cout << "1-Saque "<<endl;
                cout <<"2-Deposito "<<endl;
                cout << "3- Saldo"<<endl;
                cout << "4-voltar ao menu"<<endl;
                cout << "5- escolha para sair "<<endl;
                cin >> opcao;
                switch(opcao){
                case 1:
                cout << "Quanto deseja sacar ? "<<endl;
                cin >> saque;
                for(i=0;i<qtd;i++){
                    if(conta[i].numconta==auxnumconta){
                        if(conta[i].saldo>=saque){
                            cout << "Seu saque foi aprovado"<<endl;
                            conta[i].saldo=conta[i].saldo-saque;
                        }else{
                            if(conta[i].saldo<saque){
                                cout << "Saque negado"<<endl;
                            }
                        }
                    }
                }
                break;
                case 2:
                cout << "Quanto o senhor deseja depositar "<<endl;
                    cin >> deposito;
                for(i=0;i<qtd;i++){
                    if(conta[i].numconta==auxnumconta){
                        conta[i].saldo=conta[i].saldo+deposito;
                        cout << "Seu novo saldo é de "<<conta[i].saldo;
                        
                    }
                }
                cout << "Deposito realizado com sucesso";
                break;
                case 3:
                for(i=0;i<qtd;i++){
                    if(auxnumconta==conta[i].numconta){
                        cout << "Seu saldo é de "<<conta[i].saldo<<endl;
                    }
                }
                break;
                case 4:
                cout << "volta a tela anterior"<<endl;
                break;
                case 5:
                cout << "Deseja sair do sistema escreva sair"<<endl;
                    getline(cin,escolha);
                break;
                default:
                cout << "Opcao Invalida "<<endl;
                break;

            }

            }while(escolha!="sim");
        }else{
            if(!achou){
                cout << "Erro de busca "<<endl;
            }
        }

        }while(escolha!="sim");
         
    }else{
        cout << "Fim do progama"<<endl;
    }
    cout << "Fim do progama"<<endl;
    
}