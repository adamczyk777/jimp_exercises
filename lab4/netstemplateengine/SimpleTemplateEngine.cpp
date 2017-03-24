//
// Created by Tay on 3/22/17.
//

#include "SimpleTemplateEngine.h"

nets::View::View(std::string message) {
    this->message = message;
}

std::string nets::View::Render(const std::unordered_map <std::string, std::string> &model) const {
    std::string message = this->message;
    size_t f;
    for(const auto& n : model) {
        while(message.find("{{" + n.first + "}}") != std::string::npos) {
            f = message.find("{{" + n.first + "}}");
            message.replace(f, n.first.length() + 4, n.second);
        }
    }
    // przelec jeszcze raz po stringu i jesli zostało cos postaci {{cokolwiek}} to zamien to na pusty string
    /*std::regex pharse {R"(\{\{.+\}\})"};
    while(std::regex_search(message, pharse)) {
        std::regex_replace(message, message.begin(), message.end(), pharse, "");
    }*/
    return message;
}


