//
// Created by Tay on 3/22/17.
//

#include "SimpleTemplateEngine.h"

nets::View::View(std::string message) {
    this->message = message;
}

std::string nets::View::Render(const std::unordered_map <std::string, std::string> &model) const {
    std::string message = this->message;
    std::regex pharse {R"((\{{2})(\w+)(\}{2}))"};
    std::smatch matches;
    /* stare rozwiazanie, bez injection:
    size_t f;
    for(const auto& n : model) {
        while(message.find("{{" + n.first + "}}") != std::string::npos) {
            f = message.find("{{" + n.first + "}}");
            message.replace(f, n.first.length() + 4, n.second);
        }
    }

    while(std::regex_search(message, matches, pharse)) {
        f = message.find(matches[0]);
        message.replace(f, matches[0].length(), "");
    } */
        // new version:
        std::string found;
        std::string to_find;
        std::string to_return = "";

        while(std::regex_search(message, matches, pharse)) { // szukam wystapien w stringu
            found = matches[0]; // tu jest cały match, pozostale elementy to jakby substringi jego
            to_find = found.substr(2, found.length()-4); // to co mamy znalezc w mapie
            to_return += matches.prefix(); // prefix - wszystko przed matched sequence

        if(model.find(to_find) != model.end()) {
            to_return += model.at(to_find); // at zwraca wartosc pod danym kluczem
        }
       message = matches.suffix(); // suffix - wszystko po dopasowanym wyrażeniu
    }
    to_return += message; // dodajemy reszte w ktorej juz nie ma {{ }}
    return to_return;
}


