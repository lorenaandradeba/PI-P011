#include <iostream>
using namespace std;
void intercala(int *vet1, int tam1, int *vet2, int tam2, int *vet3, int &tam3);

int main(){
    int vetor1[4]={1,3,5,7};
    int vetor2[2]={20,40};
    int tamanho1 = 4;
    int tamanho2 = 2;
    int vetor3[tamanho1+tamanho2];
    int tamanho3;
    intercala(vetor1, tamanho1, vetor2, tamanho2, vetor3, tamanho3);

    for (int i = 0; i < tamanho3; i++) 
        cout << vetor3[i] << " ";
    
    cout<<endl;
 return 0;
}
void intercala(int *vet1, int tam1, int *vet2, int tam2, int *vet3, int &tam3){
    tam3 = tam1 + tam2;

    int n = 0;

    if (tam1<=tam2){
        for (int i = 0; i < tam1; i++) {
            vet3[n] = vet1[i];
            n++;
            vet3[n] = vet2[i];
            n++;
        }
        if(tam1<tam2){
            for (int i = tam1; i < tam2; i++) {
                vet3[n] = vet2[i];
                n++;
            }
        }
    } else {
        for (int i = 0; i < tam2; i++) {
            vet3[n] = vet1[i];
            n++;
            vet3[n] = vet2[i];
            n++;
        }
        for (int i = tam2; i < tam1; i++) {
                vet3[n] = vet1[i];
                n++;
            }
    }
}