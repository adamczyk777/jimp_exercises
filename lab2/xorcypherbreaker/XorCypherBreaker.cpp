//
// Created by jadamczyk on 3/7/17.
//

#include "XorCypherBreaker.h"

std::string XorCypherBreaker(const std::vector<char> &cryptogram, // std::string
                             int key_length,
                             const std::vector<std::string> &dictionary) {
    std::vector<char> decoded;
    std::string message;
    std::string key = "";
    for(int i=97;i<=122;i++) {
        for(int j=97;j<=122;j++) {
            for(int k=97;k<=122;k++) {
                decoded.clear();
                for(int l=0;l<cryptogram.size();l+=3) {
                    decoded.emplace_back(cryptogram[l] ^ i);
                    if(l+1 < cryptogram.size()) {
                        decoded.emplace_back(cryptogram[l+1] ^ j);
                    }
                    if(l+2 < cryptogram.size()) {
                        decoded.emplace_back(cryptogram[l+2] ^ k);
                    }
                }
                const char* word = " the ";
                if(std::search(decoded.begin(), decoded.end(), word, word + strlen(word)) != decoded.end()) {
                    key += char(i);
                    key += char(j);
                    key += char(k);
                }
            }
        }
    }
    return key;
}
