// Escreva uma função hm que converta minutos em horas-e-minutos. A função
// recebe um inteiro mnts e os endereços de duas variáveis inteiras, h e m, e atribui valores
// a essas variáveis de modo que m seja menor que 60 e que 60*h + m seja igual a mnts.
// Elabore um algoritmo que teste a função hm. 

#include <iostream>
using namespace std ;
void hm(int mnts,int *h,int *m);

int main(){
    int mnts,h,m,hm1;
   cout << "Digite os minutos que serao convetidos para hora e minutos"<<endl;
    cin >> mnts;
    hm(mnts,&h,&m);
   
}
void hm(int mnts,int *h,int *m){
    *m=mnts/60;
    if(*m>60){
        *m=*m/60;
    }
    *h=mnts-(*m/60);
    cout <<*h <<" H "<<*m<<" min"<<endl;

};