#include <iostream>
using namespace std;
void ordena(float &n1, float &n2, float &n3, float &n4);
void troca(float &n1, float &n2);
int main(){
    float numero1=1.8, numero2=1.06, numero3=1.03, numero4=0.6;
    ordena(numero1, numero2, numero3, numero4);
    cout<<"A sequencia ordenada é: "<<numero1<<", "<<numero2<<", "<<numero3<<" e "<<numero4<<endl;
    return 0;
}
void ordena(float &n1, float &n2, float &n3, float &n4){
    if(n1>n2)
        troca(n1, n2);
    if(n1>n3)
        troca(n1, n3);
    if(n1>n4)
        troca(n1, n4);;

    if(n2>n3)
        troca(n2, n3);
    if(n2>n4)
        troca(n2, n4);
    
    if(n3>n4)
        troca(n3, n4);
}
void troca(float &n1, float &n2){
    float aux = n1;
    n1=n2;
    n2=aux;
}