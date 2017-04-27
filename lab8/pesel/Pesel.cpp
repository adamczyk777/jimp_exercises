//
// Created by adamc on 25.04.2017.
//

#include "Pesel.h"

academia::Pesel::Pesel(std::string pesel) {
    validatePesel(pesel);
    this->number = pesel;
}

void academia::Pesel::validatePesel(std::string pesel) {
    // dlugosc 11 znakow:
    if (pesel.size() != 11) {
        throw(InvalidPeselLength(pesel.size()));
    }
    // tylko cyfry:
    for(int i=0;i<pesel.size();i++) {
        if(pesel[i] < 48 || pesel[i] > 57) {
            throw(InvalidPeselCharacter(pesel[i]));
        }
    }
    // suma kontrolna (9×a + 7×b + 3×c + 1×d + 9×e + 7×f + 3×g + 1×h + 9×i + 7×j):
    int sum = 9*(pesel[0] - '0')+7*(pesel[1] - '0')+3*(pesel[2] - '0')+1*(pesel[3] - '0')+9*(pesel[4] - '0')+7*(pesel[5] - '0')+3*(pesel[6] - '0')+1*(pesel[7] - '0')+9*(pesel[8] - '0')+7*(pesel[9] - '0');
    if((pesel[10] - '0') != (sum % 10)) {
        throw(InvalidPeselChecksum(sum % 10));
    }
}

academia::InvalidPeselLength::InvalidPeselLength(unsigned long peselSize) : peselSize(peselSize) {}

unsigned long academia::InvalidPeselLength::getPeselSize() const {
    return peselSize;
}

academia::InvalidPeselChecksum::InvalidPeselChecksum(int controlSum) : controlSum(controlSum) {}

int academia::InvalidPeselChecksum::getControlSum() const {
    return controlSum;
}

academia::InvalidPeselCharacter::InvalidPeselCharacter(char wrongCharecter) : wrongCharecter(wrongCharecter) {}

char academia::InvalidPeselCharacter::getWrongCharecter() const {
    return wrongCharecter;
}
