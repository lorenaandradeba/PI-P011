#include <iostream>
using namespace std;
void insere_meio(int vetor[], int tam, int valor);
int main(){
 int vetor[10]={52,39,75,592,231,83,94,98,210,99};
 int tamanho = 10;
 insere_meio(vetor, tamanho, 500);
 return 0;
}
void insere_meio(int vetor[], int tam, int valor){
    int vetor2[tam +1];
    int meio;
    if ((tam % 2)==0)
        meio = tam/2;
    else
        meio = (tam-1)/2;
    for (int i = 0; i <=tam; i++)
    {
        if (i==meio)
            vetor2[i]=valor;
        else
            vetor2[i]=vetor[i];
    }

}