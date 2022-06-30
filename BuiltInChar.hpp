#ifndef BUILTINCHAR_HPP
#define BUILTINCHAR_HPP

#include <string>

namespace LMI {

bool included(char ch, const char* string);

std::string debugDescription(char ch);
std::string debugDescription(const char* string);

}   // namespace LMI

#endif  // BUILTINCHAR_HPP
