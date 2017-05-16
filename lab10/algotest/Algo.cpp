//
// Created by adamc on 16.05.2017.
//

#include "Algo.h"

std::set<std::string> Algorithms::Keys(const std::map<std::string, int> &m) {
    return std::set<std::string>();
}

std::vector<int> Algorithms::Values(const std::map<std::string, int> &m) {
    return std::vector<int>();
}

std::map<std::string, int> Algorithms::DivisableBy(const std::map<std::string, int> &m, int divisor) {
    return std::map<std::string, int>();
}

void Algorithms::SortInPlace(std::vector<int> *v) {
    std::stable_sort(v->begin(), v->end());
}

std::vector<int> Algorithms::Sort(const std::vector<int> &v) {
    std::sort(v.begin(), v.end());
    return v;
}

void Algorithms::SortByFirstInPlace(std::vector<std::pair<int, int>> *v) {
    std::stable_sort(v->begin()->first, v->end()->first);
}

void Algorithms::SortBySecondInPlace(std::vector<std::pair<int, int>> *v) {
    std::stable_sort(v->begin()->second, v->end()->second);
}

void Algorithms::SortByThirdInPlace(std::vector<std::tuple<int, int, int>> *v) {
    std::stable_sort(v->begin()[2], v->end()[2]);
}

std::vector<std::string> Algorithms::MapToString(const std::vector<double> &v) {
    return std::vector<std::string>();
}

std::string Algorithms::Join(const std::string &joiner, const std::vector<double> &v) {
    return std::__cxx11::string();
}

int Algorithms::Sum(const std::vector<int> &v) {
    return 0;
}

int Algorithms::Product(const std::vector<int> &v) {
    return 0;
}

bool Algorithms::Contains(const std::vector<int> &v, int element) {
    return false;
}

bool Algorithms::ContainsKey(const std::map<std::string, int> &v, const std::string &key) {
    return false;
}

bool Algorithms::ContainsValue(const std::map<std::string, int> &v, int value) {
    return false;
}

std::vector<std::string> Algorithms::RemoveDuplicates(const std::vector<std::string> &v) {
    return std::vector<std::string>();
}

void Algorithms::RemoveDuplicatesInPlace(std::vector<std::string> *v) {

}

void Algorithms::InitializeWith(int initial_value, std::vector<int> *v) {

}

std::vector<int> Algorithms::InitializedVectorOfLength(int length, int initial_value) {
    return std::vector<int>();
}

void Algorithms::CopyInto(const std::vector<int> &v, int n_elements, std::vector<int> *out) {

}

int Algorithms::HowManyShortStrings(const std::vector<std::string> &v, int inclusive_short_length) {
    return 0;
}
