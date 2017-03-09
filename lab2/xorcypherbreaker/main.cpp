//
// Created by jadamczyk on 3/7/17.
//

#include "XorCypherBreaker.h"

int main() {
    const std::vector<char> cryptogram;
    const std::vector<std::string> dictionary {"the","of"};
    std::string message = XorCypherBreaker(cryptogram, 3, dictionary);
    std::cout << message;
    return 0;
}