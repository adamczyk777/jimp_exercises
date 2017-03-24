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
    // znajdz wszystkie dopasowania regexem do templejtów, ktore dostajesz pod .first i zamień je na .second.
    // czyli petla po mapie i dla kazdego firsta zamieniasz.
    return message;
}


