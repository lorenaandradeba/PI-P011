#include <iostream>
using namespace std;
int calc_serie(int n);
int main(){
    int numero, resultado=0;
    cout<<"Digite um número n:"<<endl;
    cin>>numero;
    if (numero > 0)
        resultado = calc_serie(numero);


    cout<<"O resultado da função é: "<<resultado<<endl;
 return 0;
}
int calc_serie(int n){
    int soma=2;//(1/1+1/1)
   
    for (int i = 2; i <= n ; i++) {
        soma += (i/(n-(i-1))) + (n-(i-1))/i;
    }

    return soma;
}