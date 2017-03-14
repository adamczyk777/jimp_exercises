//
// Created by Tay on 3/14/17.
//

#include "MinimalTimeDifference.h"

unsigned int minimaltimedifference::ToMinutes(std::string time_HH_MM) {
    std::string hours = time_HH_MM.substr(0,2);
    if(time_HH_MM.length() == 4) {
        std::string hours = time_HH_MM.substr(0,1);
    }
    std::string minutes = time_HH_MM.substr(3,2);
    unsigned int hoursNumber = stoi(hours);
    unsigned int minutesNumber = hoursNumber * 60 + stoi(minutes);
    return minutesNumber;
}

unsigned int minimaltimedifference::MinimalTimeDifference(std::vector<std::string> times) {
    std::vector<unsigned int> minutes;
    for(auto n: times) {
        minutes.emplace_back(minimaltimedifference::ToMinutes(n));
    }
    // sortowanko:
    unsigned int j, tmp;
    for(unsigned int i=0;i<minutes.size();i++) {
        j = i;
        while (j > 0 && minutes[j] < minutes[j-1]){
            tmp = minutes[j];
            minutes[j] = minutes[j-1];
            minutes[j-1] = tmp;
            j--;
        }
    }
    unsigned int minDifference = 100000;
    for(int i=0;i<minutes.size()-1;i++) {
           if(minDifference > (minutes[i+1] - minutes[i])) {
               minDifference = minutes[i+1] - minutes[i];
           }
    }
    if((minimaltimedifference::ToMinutes("24:00") - minutes[minutes.size()-1] + minutes[0]) < minDifference) { // jaby przechodzilo przez polnoc
        minDifference = minimaltimedifference::ToMinutes("24:00") - minutes[minutes.size()-1] + minutes[0];
    }
    // find smallest difference
    return minDifference;
}
