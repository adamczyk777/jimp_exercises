//
// Created by Tay on 3/14/17.
//

#include "MinimalTimeDifference.h"

int main() {
    std::vector<std::string> times {"12:20","00:00", "01:00","02:22","12:32"};
    std::cout << minimaltimedifference::MinimalTimeDifference(times);
    return 0;
}
