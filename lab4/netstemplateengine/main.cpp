//
// Created by Tay on 3/22/17.
//

#include "SimpleTemplateEngine.h"
#include <iostream>

int main() {
    // Create an unordered_map of three strings (that map to strings)
    std::unordered_map<std::string, std::string> u = {
            {"RED","#FF0000"},
            {"GREEN","#00FF00"},
            {"BLUE","#0000FF"}
    };

    nets::View view1("Witaj {{name}}, czy mieszkasz w {{city}}? {{name}} {{cokolwiek}} {{syf}} {{jeszczecos}}");
    std::cout << view1.Render(std::unordered_map <std::string,std::string> {{"name","Jacob"}, {"city","New York"}});
    return 0;
}
