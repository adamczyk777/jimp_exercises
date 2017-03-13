//
// Created by jadamczyk on 3/7/17.
//

#include "Polybius.h"

string PolybiusCrypt(string message){
    int tab[][5] = {{'a','b','c','d','e'},{'f','g','h','i','k'},{'l','m','n','o','p'},{'q','r','s','t','u'},{'v','w','x','y','z'}};
    string result;
    for(int i=0;i<message.length();i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                if (message[i] == tab[j][k]) {
                    result += to_string(j + 1);
                    result += to_string(k + 1);
                }
            }
        }
    }
    return result;
}
string PolybiusDecrypt(string crypted){

}