//
// Created by Tay on 3/22/17.
//

#ifndef JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H
#define JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H

#include <string>
#include <unordered_map>
#include <algorithm>
#include <regex>

namespace nets {

    class View {
    public:
        View(std::string message);

        std::string Render(const std::unordered_map <std::string, std::string> &model) const;

    private:
        std::string message;
    };

}

#endif //JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H
