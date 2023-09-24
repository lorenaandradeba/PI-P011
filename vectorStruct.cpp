#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    vector<string> hobbies; 
};

void incluir(vector<Pessoa> &pessoas){
    string nome;
    int idade;

    cout<<"Digite o nome: ";
    cin>>nome;
    cout<<"Digite a idade: ";
    cin>>idade;

    Pessoa pessoa1;

    pessoa1.nome = nome;
    pessoa1.idade = idade;
    pessoas.push_back(pessoa1);
    //pessoas[1].hobbies.push_back("Pintura");
}


void alterar(vector<Pessoa> &pessoas){
    string nome;
    int idade;

    cout<<"Digite da pessoa que deseja alterar:"<<endl;
    cin>>nome;

    for (size_t i = 0; i < pessoas.size(); i++) {
        if (pessoas[i].nome==nome){
            cout<<"A idade que deseja alterar:"<<endl;
            cin>>idade;
            pessoas[i].idade = idade;
        }
    }
}
int main() {
    // Criando um vetor de structs Pessoa
    vector<Pessoa> pessoas;

    int opcao;
    bool sair = false;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"Opcao 1: Adicionar Pessoa"<<endl;
        cout<<"Opcao 2: Ver pessoas"<<endl;
        cout<<"Opcao 3: Alterar pessoas"<<endl;
        cout<<"Opcao 0: Sair"<<endl;
        cin>>opcao;
        switch (opcao)
        {
            case (1):
                incluir(pessoas);
                break;

            case (2):
                for (const Pessoa &p : pessoas) 
                    cout << "Nome: " << p.nome << ", Idade: " << p.idade << endl;
    
                break;

             case (3):
                alterar(pessoas);
                break;

           
            case (0):
                sair = true;
                break;

            default:
                cout<<"Opção invalida. Tente novamente."<<endl;
                break;
}    
    } while (!sair);
    
    return 0;
}
