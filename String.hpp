#ifndef STRING_HPP
#define STRING_HPP

namespace LMI {

template <typename CharType>
class String {
private:
    CharType* string;

public:
    String(void) {};
    String(CharType* string) { this->string = string; };

    operator CharType*(void) { return this->string; };
    CharType& operator*(void) { return *this->string; };

    CharType* operator++(void) { return ++this->string; };
    CharType* operator++(int) { return this->string++; };

    bool contains(CharType ch);
};  // class String

#include "String.tpp"

}   // namespace LMI

#endif  // STRING_HPP
