#include <iostream>
#include "intruso.hpp"

int main(){
    int num_entradas, i;
    std::string senha;
    Intruso intruso;
    
    std::cin >> num_entradas;
    std::cin.ignore();

    for(i=0; i < num_entradas; i++){
        std::getline(std::cin, senha);
        intruso.set_senha_vazada(senha);
    }
    intruso.crack_senha(num_entradas);

    return 0;
}