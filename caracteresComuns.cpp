#include <iostream>
#include <string>

using namespace std;

string getCaracteresComuns(string mensagem1, string mensagem2);

int main() {
    string strA = "";
    string strB = "";
    cout << "Digite uma sequencia de caracteres A:" << endl;
    
    cin >> strA;

    cout << "Digite uma sequencia de caracteres B:" << endl;
    
    cin >> strB;

    string strC = getCaracteresComuns(strA, strB);

    if (strC == ""){
        cout << "As strings A e B não tem caracteres comuns." << endl;
    }
    else{
        cout << "Os caracteres que aparecem tanto em A quanto em B são: " << strC << endl;
    }

    

    

    return 0;
}
string getCaracteresComuns(string mensagem1, string mensagem2) {
    string strNova  = "";
    int tamanho1 = mensagem1.length();
    int tamanho2 = mensagem2.length();
    
    bool encontrou = false;
    if (tamanho1 <= tamanho2){
        for (int i = 0; i < tamanho2; i++) {
            encontrou=false;
            for (int j = 0; j < tamanho1; j++) {
                if (mensagem2[i] == mensagem1[j]) {
                    //Verificacao para nao repetir caracteres 
                    if (strNova.find(mensagem2[i]) == string::npos){
                        strNova += mensagem2[i];
                        break;
                    }
                }
            }
        }
    }
    else{
         for (int i = 0; i < tamanho1; i++) {
            encontrou=false;
            for (int j = 0; j < tamanho2; j++) {
                if (mensagem1[i] == mensagem2[j]) {
                    //Verificacao para nao repetir caracteres 
                    if (strNova.find(mensagem1[i]) == string::npos){
                        strNova += mensagem1[i];
                        break;
                    }
                }
            }
        }
    }
        
    return strNova;
}

