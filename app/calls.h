// Arquivo criado para conter a declaração de classes e funções
#ifndef CALLS_H // verificação para evitar inclusões múltiplas
#define CALLS_H // incluido o arquivo apenas uma vez
#include <string>
#include <iostream>
using namespace std;

class Pessoa{ // criando a classe pessoa
public: 
    Pessoa(string nome, int idade);
    void apresentar();

private:
    string nome;
    int idade;
};





#endif // CALLS_H // finalização da verificação de inclusão múltipla