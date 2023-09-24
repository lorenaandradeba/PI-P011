#include <iostream>
#include <string>

using namespace std;
string codifica(string mensagem);
string decodifica(string mensagem);
int main() {
    string mensagemOriginal = "";

    cout << "Digite uma mensagem:" << endl;

    cin.ignore();

    getline(cin, mensagemOriginal);
    string mensagemCodificada = codifica(mensagemOriginal);
    cout << "Mensagem codificada: " << mensagemCodificada << endl;

    string mensagemDecodificada = decodifica(mensagemCodificada);
    cout << "Mensagem decodificada: " << mensagemDecodificada << endl;

    return 0;
}

string codifica(string mensagem) {
    string str = "";
    int tamanho = mensagem.length();
    for (int i = 0; i < tamanho; i++) {
        if (isalpha(mensagem[i])) {
            if (mensagem[i]  == 'Z') {
                str += 'A';
            } else if (mensagem[i]  == 'z') {
                str += 'a';
            } else {
                str += ++mensagem[i];
            }
        }
        else
           str += mensagem[i]; 
    }
        
    return str;
}

string decodifica(string mensagem) {
    string str = "";
    int tamanho = mensagem.length();
    
    for (int i = 0; i < tamanho; i++) {
        if (isalpha(mensagem[i] )) {
            if (mensagem[i]  == 'Z') {
                str += 'A';
            } else if (mensagem[i]  == 'z') {
                str += 'a';
            } else {
                str += --mensagem[i];
            }
        }
        else
           str += mensagem[i]; 
    }
    return str;
}

