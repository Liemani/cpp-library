#ifndef WRAPCHAR_HPP
#define WRAPCHAR_HPP

#include <iostream>

namespace LMI {

struct WrapChar {
public:
    char value;

    WrapChar(void) {};
    WrapChar(char value) { this->value = value; };

    operator char&(void) { return this->value; };
};  // struct WrapChar

void debugDescription(std::ostream& out, const WrapChar& wrapChar);

}   // namespace LMI

#endif  // WRAPCHAR_HPP
