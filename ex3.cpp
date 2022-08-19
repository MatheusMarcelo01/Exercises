//função fatorial de um numero inteiro positivo inf. pelo user
#include <iostream>
using namespace std;

int fat(int x){
    int fatorial=1;
    for (int i=1; i<=x; i++){ 
        fatorial*=i;
    }
    return 0;
}

int main(){
    int n;
    while (true){
    cout <<"informe um numero inteiro positivo: \n";
    cin>> n;
    if (n<0){
        cout<<"o numero informado e negativo!\n";

    }else{
        break;
    }  
    }

    int valor_fat = fat(n);
    cout<<"O valor do fatorial de: "<<n<<" e: "<<valor_fat<<endl;

    return 0;
}