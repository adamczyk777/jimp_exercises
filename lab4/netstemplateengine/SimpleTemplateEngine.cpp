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
    std::regex pharse {R"((\{{2})(\w+)(\}{2}))"};
    std::smatch matches;
    while(std::regex_search(message, matches, pharse)) {
        f = message.find(matches[0]);
        message.replace(f, matches[0].length(), "");
    }
    return message;
}


