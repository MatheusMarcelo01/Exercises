//em um programa de moradia, somente pessoas maiores de 21, e renda abaixo de 1200 podem participar
//perguntar idade e renda, e dizer se pode participar do programa ou não
#include <iostream>
using namespace std;


int main(){
    int idade, renda;
    cout<<"Digite sua idade:\n";
    cin>>idade;
    cout<<"Digite sua renda mensal\n";
    cin>>renda;

    if(idade>=21 && renda<1200){
        cout<<"Voce participar do programa!";
    }else{
        cout<<"Voce nao pode participar do programa!";
    }

    return 0;
}