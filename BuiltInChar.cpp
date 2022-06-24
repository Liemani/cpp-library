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

void debugDescription(std::ostream& out, char ch) {
    out << '\"';
    out << ch;
    out << '\"';
}

void debugDescription(std::ostream& out, const char* string) {
    out << '\"';
    out << string;
    out << '\"';
}

}   // namespace LMI
