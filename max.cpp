#include <iostream>
using namespace std;
void maxMin(int vector[], int n, int &maximo, int &minimo);
int main(){
    int vetor[10]={52,39,75,592,231,83,94,98,210,99};
    int quantidade = 10;
    int max, min;
    maxMin(vetor, quantidade, max, min);
    cout<<"O valor máximo do vetor é:"<<max<<" e o mínimo é:"<<min<<endl;
    return 0;
}
void maxMin(int vector[], int n, int &maximo, int &minimo){
    
    for (int  i = 0; i < n; i++)
    {
        if (i==0){
            maximo=vector[i];
            minimo=vector[i];
        }else{
            if(vector[i]>maximo)
                maximo=vector[i];
            if(vector[i]<minimo)
                minimo=vector[i];

            
        }
            
        
    }
}
//A coesao é Comunicacional porque ele ta utilizando a mesma entrada para realizar duas tarefas diferentes
//Isso poderia ser melhor resolvido criando duas funções uma que retorna o máximo e outra que retorna o minimo
//E o acoplamento é o Acoplamento de Dados porque há a comunicação por parâmetros.