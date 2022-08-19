// f(x)=x²-3x+5, sendo f(a), a variável digitada pelo usuário
#include <iostream>
using namespace std;

float f(float x){
    int valor;
    valor=x*x-3*x+5;
    return valor;
}

int main(){
    float a;
    cout<<"Digite um número real:\n";
    cin>>a;
    float valor_f = f(a);
    cout<<"O valor da funcao no ponto: "<<a <<" e igual a: "<<valor_f<<endl;

    return 0;
}