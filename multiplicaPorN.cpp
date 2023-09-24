#include <iostream>
using namespace std;
void multiplica_por_n(int *vet, int qtde, int n);

int main(){
    int vetor[7]={1,5,2,3,7,9,4};
    int tamanho = 7;
    multiplica_por_n(vetor, tamanho, 100);

    for (int i = 0; i < tamanho; i++) 
        cout << vetor[i] << " ";
    
    cout<<endl;
    return 0;
}

void multiplica_por_n(int *vet, int qtde, int n){
    for (int i = 0; i < qtde; i++) 
        vet[i] = vet[i] * n;
}