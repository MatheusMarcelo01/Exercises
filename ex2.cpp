//calcular a média e tals, e dizer a média mediante o resto da sala

#include <iostream>
using namespace std;

int main(){
    float nota_1, nota_2, nota_3, media_turma;
    cout<<"Digite a nota 1:";
    cin>>nota_1;
    cout<<"Digite a nota 2:";
    cin>>nota_2;
    cout<<"Digite a nota 3:";
    cin>>nota_3;
    cout<<"Digite a media da turma: ";
    cin>>media_turma;
    
    float media = (nota_1+nota_2+nota_3)/3; //media = media do aluno
    cout<<"A media do aluno foi de: "<<media<<endl;

    if(media<media_turma){
        cout<<"A media do aluno esta abaixo que a media da sala.\n";
    }else if(media==media_turma){
        cout<<"A media do aluno esta dentro da media padrao da sala.\n";
    }else if(media>media_turma){
        cout<<"A media do aluno esta acima que a media da sala";
    }

    return 0;
}