#include <string>
#include "BuiltInChar.hpp"

namespace LMI {

bool included(char ch, const char* string) {
    while (*string != '\0') {
        if (*string == ch)
            return true;
        ++string;
    }

    return false;
}

std::string debugDescription(char ch) {
    std::string description;

    description += '\"';
    description += ch;
    description += '\"';

    return description;
}

std::string debugDescription(const char* string) {
    std::string description;

    description += '\"';
    description += string;
    description += '\"';

    return description;
}

}   // namespace LMI
