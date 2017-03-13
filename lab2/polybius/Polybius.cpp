//
// Created by jadamczyk on 3/7/17.
//

#include "Polybius.h"

string PolybiusCrypt(string message){
    string result;
    map<char, int> schema = {{'a', 11}, {'b', 12}, {'c', 13}, {'d',14}, {'d', 14},{'e', 15}, {'f', 21}, {'g', 22},
                             {'h', 23}, {'i', 24}, {'j', 24}, {'k', 25}, {'l', 31}, {'m', 32}, {'n', 33}, {'o', 34},
                             {'p', 35}, {'q', 41}, {'r', 42}, {'s', 43}, {'t', 44}, {'u', 45}, {'v', 51}, {'w', 52},
                             {'x', 53},{'y', 54}, {'z', 55}};
    map<char, int>::iterator it = schema.begin();

    for(int i=0;i<message.length();i++) {
        for (pair<char, int> el : schema) {
            if (el.first == tolower(message[i])) {
                result += to_string(el.second);
            }

        }
    }
//    int tab[][5] = {{'a','b','c','d','e'},{'f','g','h','i','k'},{'l','m','n','o','p'},{'q','r','s','t','u'},{'v','w','x','y','z'}};
//    string result;
//    for(int i=0;i<message.length();i++) {
//        for (int j = 0; j < 5; j++) {
//            for (int k = 0; k < 5; k++) {
//                if (message[i] == tab[j][k]) {
//                    result += to_string(j + 1);
//                    result += to_string(k + 1);
//    delete(&schema);
    return result;
}
string PolybiusDecrypt(string crypted){
    string result;
    map<char, int> schema_reverse = {{'a', 11}, {'b', 12}, {'c', 13}, {'d',14}, {'d', 14},{'e', 15}, {'f', 21}, {'g', 22},
                                     {'h', 23}, {'i', 24}, {'j', 24}, {'k', 25}, {'l', 31}, {'m', 32}, {'n', 33}, {'o', 34},
                                     {'p', 35}, {'q', 41}, {'r', 42}, {'s', 43}, {'t', 44}, {'u', 45}, {'v', 51}, {'w', 52},
                                     {'x', 53},{'y', 54}, {'z', 55}};
    map<char, int>::iterator it = schema_reverse.begin();

    for (int i=0;i<crypted.length();i+=2){
        for(pair<char, int> el : schema_reverse){
            if (crypted.substr(i,2) == to_string(el.second)){
                result += el.first;
            }
        }
    }

//    delete(&schema_reverse);
    return result;
}