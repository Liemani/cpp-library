#ifndef WRAPCHAR_HPP
#define WRAPCHAR_HPP

#include <string>

namespace LMI {

template <typename CharType>
class WrapChar {
private:
    char ch;

public:
    WrapChar(void) {};
    WrapChar(char ch) { this->ch = ch; };

    operator CharType&(void) { return this->ch; };

    bool included(CharType* string) const;

    void debugDescription(std::ostream& out) const;
};  // class WrapChar

#include "WrapChar.ipp"

}   // namespace LMI

#endif  // WRAPCHAR_HPP
