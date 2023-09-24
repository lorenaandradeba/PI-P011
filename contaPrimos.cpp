#include <iostream>
using namespace std;
int conta_primos(int *vet, int qtde);
bool verificaSeEhPrimo(int numero);
int main(){
    int vetor[7]={1,5,2,3,7,9,4};
    int tamanho = 7;
    int quantosSaoPrimos;

    quantosSaoPrimos = conta_primos(vetor, tamanho);

    cout<<"O vetor: {";
    for (int i = 0; i < tamanho; i++) {
        cout<<vetor[i];
        if(i<tamanho-1)
            cout<<", ";
    }
    cout<<"} tem: "<<quantosSaoPrimos<<" números primos."<<endl;
    return 0;
}
int conta_primos(int *vet, int qtde){
    int quantos=0;
    for (int i = 0; i < qtde; i++) {
        if(verificaSeEhPrimo(vet[i]))
            quantos++;
    }
    return quantos;        
}
bool verificaSeEhPrimo(int numero){
    if(numero==1){
        return true;
    }else{
        int quantosDivisores=0;
        for (int i = 1; i <=numero ; i++){
            if((numero%i)==0)
                quantosDivisores++;
        }
        if (quantosDivisores==2)
            return true;
        else
            return false;
    }
}