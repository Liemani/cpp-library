#ifndef CHAR_HPP
#define CHAR_HPP

namespace LMI {

template <typename CharType>
class Char {
private:
    char ch;

public:
    Char(void) {};
    Char(char ch) { this->ch = ch; };

    operator char(void) { return this->ch; };

    bool included(CharType* string);
};  // class Char

#include "Char.tpp"

}   // namespace LMI

#endif  // CHAR_HPP
