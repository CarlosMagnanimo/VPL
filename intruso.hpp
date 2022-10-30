#include <string>
#include<map>
#include<vector>


class Intruso{
    /*Continue a implementação da classe Intruso*/
    std::vector<char> senha_conjuntos;

    public:
        void set_senha_vazada(std::string vazou);
        void crack_senha(int num_senhas_vazadas);
};