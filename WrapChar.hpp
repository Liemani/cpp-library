#ifndef WRAPCHAR_HPP
#define WRAPCHAR_HPP

#include <string>

namespace LMI {

struct WrapChar {
public:
    char value;

    WrapChar(void) {};
    WrapChar(char value) { this->value = value; };

    operator char&(void) { return this->value; };
};  // struct WrapChar

    std::string debugDescription(const WrapChar& ch);

}   // namespace LMI

#endif  // WRAPCHAR_HPP
