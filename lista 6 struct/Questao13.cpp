// Elabore um algoritmo que:
// - Crie o registro tProduto: Registro tProduto:
// descricao: string
// quantidade: int
// precoUnitario: float
// subTotal: float
// Obs: o campo subtotal deve ser
// calculado automaticamente, sendo
// ele resultante da quantidade x
// preço unitário do produto.
// - Crie o registro tNotaFiscal Registro tNotaFiscal:
// numero: int
//  data: string
// itens: tProduto[5]
// total: float
// Obs: o campo total deve ser
// calculado automaticamente, sendo
// ele a soma de todos os SubTotais
// dos produtos cadastrados.
// - Declare um vetor NotasFiscais (5 posições de tNotaFiscal) e leia seus dados.
// - Informe o seguinte menu e proceda com a operação de acordo com a escolha do usuário:
// - Se o usuário escolher a opção 1, o algoritmo deverá mostrar todos os dados de todas as
// notas cadastradas.
// - Se o usuário escolher a opção 2, solicite o número da nota e faça a busca. Se existir, mostre
// seus produtos. Se não existir, informe.
// - Se o usuário escolher a opção 3, mostre os dados da nota que tem o maior valor total. - Se
// o usuário escolher a opção 4, solicite a descrição do produto, calcule e mostre o somatório
// de todas as quantidades vendidas daquele produto em todas as notas.
// - Se o usuário escolher a opção 5, calcule e mostre a média de todos os totais das notas.
// - Se o usuário escolher a opção 6, finalize o sistema. 

#include <iostream>
#include <string>
using namespace std;
struct Tproduto{
    string descricao;
    int quantidade;
    float precoUnitario;
    float Subtotal;
};
struct Tnotafiscal{
    int numero;
    string data;
    Tproduto produto [5];
    float total=0;
};
int main(){
    int i,qtd,escolha,auxnumero,auxqtd,j,escolha,indice;
    float media,maior=0,total=0,soma=0;
    bool achou=false;
    Tnotafiscal nota[5];
    string auxdesc;
    for(i=0;i<5;i++){
        cout << "Quantos produtos deseja comprar "<<endl;
        cin >> qtd;
        cout << "Digite o numero da sua nota fiscal "<<endl;
            cin >> nota[i].numero;
        cout << "Digite a data da emissao da nota fiscal "<<endl;
            cin >> nota[i].data;
        for(j=0;j<qtd;j++){
        getchar();
        cout << "Digite o nome do produto"<<endl;
            getline(cin,nota[i].produto[j].descricao);
            getchar();
        cout << "Digite a quantidade de produto que voce deseja comprar "<<endl;
            cin >> nota[i].produto[j].quantidade;
            //getchar();
        cout << "Digite o preco unitario do produto"<<endl;
            cin >> nota[i].produto[j].precoUnitario;
             nota[i].produto[j].Subtotal=nota[i].produto[j].precoUnitario*nota[i].produto[j].quantidade;
            nota[i].total=0;
        nota[i].total+=nota[i].produto[j].Subtotal;
        soma+=nota[i].total;
        if(nota[i].total>maior){
            maior=nota[i].total;
            i=indice;
            }
        }
    }
        do{
        cout << "----menu"<<endl;
        cout << "1-Mostrar todas as notas cadastradas "<<endl;
        cout << "2-Buscar nota por numero  "<<endl;
        cout << "3-Exbir nota com o maior valor "<<endl;
        cout << "4-Exibir a Quantidade total vendida de um produto apartir da sua descricao "<<endl;
        cout << "5-Exibir a media de total de notas "<<endl;
        cout << "6- Sair  "<<endl;
            cin >> escolha;
        switch(escolha){
            case 1:
            for(i=0;i<5;i++){
                for(j=0;j<qtd;j++){
                    cout << nota[i].numero<<endl;
                    cout << nota[i].data<<endl;
                    cout << nota[i].produto[j].descricao<<endl;
                    cout << nota[i].produto[j].precoUnitario<<endl;
                    cout << nota[i].produto[j].quantidade<<endl;
                    cout << nota[i].produto[j].Subtotal<<endl;
                    cout << nota[i].total<<endl;
                }
            }
            break;
            case 2:
            cout << "Digite o numero da nota fiscal que esta buscando "<<endl;
                cin >> auxnumero;
            for(i=0;i<5;i++){
                if(auxnumero==nota[i].numero){
                    achou=true;
                    for(j=0;j<qtd;j++){
                        cout << nota[i].produto[j].descricao<<endl;
                    }
                }
            }
            if(!achou){
                cout << "Não foi possivel achar esse numero informado"<<endl;
            }
            break;
            case 3:
                cout << nota[indice].data<<endl;
                cout << nota[indice].numero<<endl;
                for(i=0;i<qtd;i++){
                   cout <<  nota[indice].produto[i].descricao<<endl;
                   cout <<  nota[indice].produto[i].precoUnitario<<endl;
                   cout << nota[indice].produto[i].quantidade<<endl;
                   cout << nota[indice].produto[i].Subtotal<<endl;
                }
                cout << maior<<endl;
            break;
            case 4:
                getchar();
                achou=false;
                cout << "Qual produto deseja consultar para saber as vendas "<<endl;
                    getline(cin,auxdesc);
                for(i=0;i<5;i++){
                    for(j=0;j<qtd;j++){
                        if(auxdesc==nota[i].produto[j].descricao){
                            achou=true;
                            total+=nota[i].produto[j].Subtotal;
                        }
                    }
                }
                if(achou)
                cout << "O total vendido desse produto é de "<<total<<endl;
                else{
                    cout << "O produto digitado não foi encontrado "<<endl;
                }
                break;
                case 5:
                media=soma/5;
                cout << "A media de todas as notas fiscais é de "<< media <<endl;
                break;
                case 6: cout << "Fim do progama "<<endl;
                break;
                default: cout << "Opcao Invalida !!! "<<endl;
                

            }

        }while(escolha!=6);

}
    