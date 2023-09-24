# Módulo PI - Programação Imperativa 
## INSTRUÇÃO PRÁTICA: PI-P011
Este repositório contém os códigos fontes em C++ dos exercícios propostos no módulo Programação Imperativa.

Exercício 1: **max.cpp** - *Recebe um vetor de números inteiros chamado vetor, uma variável inteira n contendo o tamanho do vetor, e os endereços de duas variáveis inteiras, maximo e minimo
                      e retorna o valor do elemento de maior valor e o valor do elemento de menor valor.
                      Utiliza o prototipo proposto: 
                      void maxmin(int vetor[], int n, int &maximo, int &minimo);*

Exercício 2: *Qual o tipo de coesão e acoplamento da função do exercício 1?* 
              A coesao é Comunicacional porque ele ta utilizando a mesma entrada para realizar duas tarefas diferentes
              Isso poderia ser melhor resolvido criando duas funções uma que retorna o máximo e outra que retorna o minimo
              E o acoplamento é o Acoplamento de Dados porque há a comunicação por parâmetros.

Exercício 3: **ordena.cpp** - *Faz uma função que recebe (por referência) 4 variáveis float
                              e ordena (crescente) os valores das variáveis.*

Exercício 4: **calcula.cpp**  - *Escreve uma função calcula que:
                                  a. recebe como parâmetros duas variáveis inteiras, X e Y;
                                  b. retorna em X a soma de X e Y;
                                  c. retorna em Y a subtração de X e Y.*

Exercício 5: **inseremeio.cpp** - *Faz uma função “insere_meio(int vet[ ], int tam)” que insere um elemento no meio
                                  de um vetor de números inteiros. Utiliza o prototipo: 
                                  int insere_meio( int *vetor, int qtde, int elemento);*

Exercício 6: **intercala.cpp** - *Faz uma função que recebe dois vetores de números inteiros e os seus
                                  respectivos tamanhos por parâmetro e retorne um vetor com os valores dos dois vetores intercalados.
                                  Utiliza o seguinte protótipo: int* intercala(int *vet1, int tam1, int *vet2, int tam2);*

Exercício 7: **multiplicaPorN.cpp** - *Faz uma função que recebe um vetor de números inteiros por parâmetro, a quantidade de elementos do vetor, e um multiplicador
                                      e multiplica cada elemento do vetor pelo multiplicador.
                                      Protótipo da função: void multiplica_por_n(int *vet, int qtde, int n);*

Exercício 8: **contaPrimos.cpp** - *Faz uma função chamada conta_primos que receba um vetor de números inteiros e retorna a quantidade de números do vetor que são primos.
                                    Protótipo da função utilizado:
                                    int conta_primos (int *vet, int qtde);*

Exercício 9: **calcSerie.cpp** - *Faz uma função para calcular o valor de S*

Exercício 10: **letraEmString.cpp** - *Escreve uma função que recebe uma string de caracteres e uma letra e devolve um
                                      vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi encontrada) 
                                      e um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas). 
                                      Retorna de um vetor com os índices e o tamanho do vetor*
                    

Exercício 11: **codifica.cpp** - "Escreva uma função que codifica uma string em um código secreto. 
                      Utiliza a regra: substituir cada letra pela letra seguinte."

Exercício 12: **caracteresComuns.cpp** - *Escreve uma função que recebe duas strings A e B por parâmetro e retorne uma
                                          terceira string C com os caracteres que aparecem tanto em A quanto em B. 
                                          O tamanho das string A e B pode ser diferente.*
