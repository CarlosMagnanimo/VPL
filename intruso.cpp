#include <string>
#include<map>
#include<vector>
#include<iostream>
#include "intruso.hpp"


// class Intruso{
//     /*Continue a implementação da classe Intruso*/
//     std::vector<int> senha_conjuntos;

//     public:
//         void set_senha_vazada(std::string vazou);
//         std::string crack_senha();
// };

// 1 7 3 9 0 8 5 6 2 4 B C E A E B
// 9 0 7 5 8 4 6 2 3 1 E C C B D A

void Intruso::set_senha_vazada(std::string vazou){
    std::map<char, char[2]> mp;
    for(int i = 0; i<20; i+=4){
        char c = 'A' + i/4;
        mp[c][0] = vazou[i];
        mp[c][1] = vazou[i+2];
        
    }
    // for(auto it = mp.begin(); it!= mp.end(); it++){
    //     std::cout<<it->first<< ":"<<it->second<<std::endl;
    // }
    for(int i = 20; i<31; i+=2){
        senha_conjuntos.push_back(mp[vazou[i]][0]);
        senha_conjuntos.push_back(mp[vazou[i]][1]);
    }
    // for(int i = 0; i<senha_conjuntos.size(); i++){
    //     std::cout<<senha_conjuntos[i]<<" "<<std::endl;
    // }
}