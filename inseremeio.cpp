#include <iostream>
using namespace std;
void insere_meio(int *vetor, int &tam, int valor);

int main(){
    int vetor[7] = {1,5,2,3,7,9,4};
    int tamanho = 7;
    insere_meio(vetor, tamanho, 500);

    for (int i = 0; i < tamanho; i++) 
        cout << vetor[i] << " ";

    cout<<endl;
    return 0;
}

void insere_meio(int *vetor, int &tam, int valor){
    int meio = tam/2;
   
    for (int i = tam; i > meio; i--) 
        vetor[i] = vetor[i - 1];
    
    vetor[meio] = valor;    
    tam++;
}