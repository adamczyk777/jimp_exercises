//
// Created by jadamczyk on 3/7/17.
//

#include "GreatestProduct.h"

int GreatestProduct(const std::vector<int> &numbers, int k) {
    std::vector<int> halfSorted = numbers;

    // funkcja ma znajdowac najwiekszy iloczyn o k skladnikach w tablicy.
    int maxValue;
    int minValue;
    int maxValueIndex = 0;
    int minValueIndex = 0;
    int tmp;
    for(int i=0;i<k;i++) { // lece po tablicy i znajduje maxa, ktorego wrzucam na koniec i mina na poczatek:
        maxValue = -10000;
        minValue = 10000;
        for(int j=i;j<halfSorted.size()-i;j++) {
            if (halfSorted[j] > maxValue) {
                maxValue = halfSorted[j];
                maxValueIndex = j;
            }
            if (halfSorted[j] < minValue) {
                minValue = halfSorted[j];
                minValueIndex = j;
            }
        } // swapy:
        tmp = halfSorted[i];
        halfSorted[i] = minValue;
        halfSorted[minValueIndex] = tmp;

        tmp = halfSorted[halfSorted.size()-1-i];
        halfSorted[halfSorted.size()-1-i] = maxValue;
        halfSorted[maxValueIndex] = tmp;
    }
    for(int i=0;i<halfSorted.size();i++) { // test
        std::cout << halfSorted[i] << " ";
    }
    int maxProduct = 1; // w toku
    for(int i=0;i<halfSorted.size();i++) {
        if(i > halfSorted.size()-k) {
            maxProduct *= halfSorted[i];
        }
    }
    return maxProduct;

}