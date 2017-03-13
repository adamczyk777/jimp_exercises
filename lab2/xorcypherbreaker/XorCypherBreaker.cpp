//
// Created by jadamczyk on 3/7/17.
//

#include "XorCypherBreaker.h"

std::string XorCypherBreaker(const std::vector<char> &cryptogram, // std::string
                             int key_length,
                             const std::vector<std::string> &dictionary) {
    std::vector<char> decoded;
    std::string message;
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
                std::cout << "key: " << char(i) << char(j) << char(k) << " message: ";
                for(int h=0;h<decoded.size();h++) {
                    std::cout << decoded[h];
                }
                std::cout << std::endl;
                /*if(find(dictionary.begin(),dictionary.end(),"of") != dictionary.end()) {// zeby to kulawe rozwiazanie dzialalo to szyfr musialby bys vectorem stringow, a nie charow...
                    std::string key = char(i) + char(j) + char(k);
                    std::cout << key;
                }*/
                /*if(strstr(decoded, " the ")) {
                    std::string key = char(i) + char(j) + char(k);
                    std::cout << key;
                }*/
            }
        }
    }
    return message;
}
