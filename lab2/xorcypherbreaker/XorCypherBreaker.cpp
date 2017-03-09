//
// Created by jadamczyk on 3/7/17.
//

#include "XorCypherBreaker.h"

std::string XorCypherBreaker(const std::vector<char> &cryptogram,
                             int key_length,
                             const std::vector<std::string> &dictionary) {
    std::vector<char> decoded;
    std::string message = "";
    for(int i=97;i<=122;i++) {
        for(int j=97;j<=122;j++) {
            for(int k=97;k<=122;k++) {
                for(int l=0;l<cryptogram.size();l+=3) {
                    decoded.emplace_back(cryptogram[l] ^ i);
                    if(l+1 < cryptogram.size()) {
                        decoded.emplace_back(cryptogram[l] ^ j);
                    }
                    if(l+2 < cryptogram.size()) {
                        decoded.emplace_back(cryptogram[l] ^ k);
                    }
                }
                for(int a=0;a<decoded.size();a++) {
                    message[a] = decoded[a];
                }
                if (std::find(dictionary.begin(),dictionary.end(),"of") != dictionary.end()) {
                    std::cout << "key: " << i << j << k << " ";
                }
            }
        }
    }
    return message;
}
