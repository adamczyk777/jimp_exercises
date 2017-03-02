//
// Created by adamjaku on 28.02.17.
//

#include "DoubleBasePalindromes.h"

bool isPalindrome(int number, int systemBase) {
    int reversedNumber = 0;
    int numberCopy = number;
    while(numberCopy > 0) {
        reversedNumber = reversedNumber * systemBase + numberCopy % systemBase;
        numberCopy = numberCopy / systemBase;
    }
    return (number == reversedNumber);
}

uint64_t DoubleBasePalindromes(int max_value_exclusive) {
    uint64_t sum = 0;
    for(int i=1;i<max_value_exclusive;i++) {
        if(isPalindrome(i,2) && isPalindrome(i,10)) {
            sum += i;
        }
    }
    return sum;
}
