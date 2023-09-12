#include <iostream>
using namespace std;
void calculaEretornaSomaSub(int &x, int &y);
int main(){
    int x=20, y=19;
    calculaEretornaSomaSub(x, y);
    cout<<"A o valor de x é: "<<x<<" e o valor de y é: "<<y<<endl;
    return 0;
}
void calculaEretornaSomaSub(int &x, int &y){
    int aux = x;
    x = x + y;
    y = aux - y;
}
