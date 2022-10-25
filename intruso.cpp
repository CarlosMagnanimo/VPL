#include <string>
#include<map>
#include<vector>
#include "intruso.hpp"


// class Intruso{
//     /*Continue a implementação da classe Intruso*/
//     std::vector<int> senha_conjuntos;

//     public:
//         void set_senha_vazada(std::string vazou);
//         std::string crack_senha();
// };

void Intruso::set_senha_vazada(std::string vazou){
    std::map<char, int[2]> mp;
    for(int i = 0; i<20; i+=4){
        char c = 'A' + i/2;
        mp[c][0] = vazou[i];
        mp[c][1] = vazou[i+2];
    }

    for(int i = 20; i<31; i+= 2){
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->first == vazou[i]){
                senha_conjuntos.push_back((it->second)[0]);
                senha_conjuntos.push_back((it->second)[1]);
            }
        }
    }

    // 1 7 3 9 0 8 5 6 2 4 B C E A E B
    // for(auto it = vec.begin(); it != vec.end(); it++){
	// 	for(int i = 0; i<10; i+=2){
	// 		char c = 'A' + i/2;
	// 		 = str[i];
	// 		my[c][1] = str[i+1];
			
	// 	}
	// }

}