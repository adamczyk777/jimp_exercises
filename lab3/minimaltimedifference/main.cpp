//
// Created by Tay on 3/14/17.
//

#include "MinimalTimeDifference.h"

int main() {
    std::vector<std::string> times {"1:00", "23:59", "17:56", "14:13", "15:40"};
    std::cout << minimaltimedifference::MinimalTimeDifference(times);
    return 0;
}
