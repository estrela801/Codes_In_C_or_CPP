#include <iostream>
#include "calls.h" // chamando o arquivo de cabeçalho com as declarações
using namespace std; 

int main() {
    cout << "GitHub Codespaces está funcionando com C++!" << std::endl;
    Pessoa p("Rodrigo", 18); // passando as informações para o construtor
    p.apresentar(); // chamando o método apresentar da classe Pessoa
    return 0;
}
