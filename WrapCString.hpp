#ifndef WRAPCSTRING_HPP
#define WRAPCSTRING_HPP

#include <string>

namespace LMI {

template <typename CharType>
class WrapCString {
private:
    CharType* string;

public:
    WrapCString(void) {};
    WrapCString(CharType* string) { this->string = string; };

    operator CharType*(void) { return this->string; };
    CharType& operator*(void) { return *this->string; };

    CharType* operator++(void) { return ++this->string; };
    CharType* operator++(int) { return this->string++; };

    bool contains(char ch) const;

    void debugDescription(std::ostream& out) const;
};  // class WrapCString

#include "WrapCString.ipp"

}   // namespace LMI

#endif  // WRAPCSTRING_HPP
