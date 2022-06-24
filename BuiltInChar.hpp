#ifndef BUILTINCHAR_HPP
#define BUILTINCHAR_HPP

#include <iostream>

namespace LMI {

bool included(char ch, const char* string);


void debugDescription(std::ostream& out, char ch);
void debugDescription(std::ostream& out, const char* string);

}   // namespace LMI

#endif  // BUILTINCHAR_HPP
