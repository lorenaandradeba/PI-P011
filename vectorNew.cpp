#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Criando um vetor de inteiros
    vector<int> meuVetor;

    // Inserindo elementos no vetor
    meuVetor.push_back(10);
    meuVetor.push_back(20);
    meuVetor.push_back(30);

    // Exibindo os elementos do vetor
    cout << "Elementos do vetor: ";
    for (int i = 0; i < meuVetor.size(); i++) {
        cout << meuVetor[i] << " ";
    }
    cout << endl;

    // Alterando um elemento do vetor
    meuVetor[1] = 25;

    // Excluindo o último elemento do vetor
    meuVetor.pop_back();

    // Exibindo os elementos do vetor novamente
    cout << "Elementos do vetor após alteração e exclusão: ";
    for (int i = 0; i < meuVetor.size(); i++) {
        cout << meuVetor[i] << " ";
    }
    cout << endl;

    return 0;
}