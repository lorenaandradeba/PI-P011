#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;

void encontraLetraEmString(string frase, char letra, int *tamanho, int *indices);

int main(){
    string minhaFrase = "eu estou fazendo o exercicio 10 da instrucao pratica PI-011";
    char letra = 'e';
    
    int tamanho = minhaFrase.length();
    int vecIndices[tamanho];

    encontraLetraEmString(minhaFrase, letra, &tamanho, vecIndices);

    if (tamanho > 0) {
        cout << "Letra encontrada nas posições: ";
        for (int i = 0; i < tamanho; i++) {
            cout << vecIndices[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Letra não encontrada na frase." << endl;
    }

}
void encontraLetraEmString(string frase, char letra, int *tamanho, int *indices) {
    int contador = 0;

    for (int i = 0; i < *tamanho; i++) {
        if (frase[i] == letra) {
            
            indices[contador] = i;
            contador++;
        }
    }
    *tamanho = contador;
    
}