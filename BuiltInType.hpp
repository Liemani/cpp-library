#ifndef BUILTINTYPE_HPP
#define BUILTINTYPE_HPP

#include <string>
#include <sstream>

namespace LMI {

template <typename BuiltInType>
std::string debugDescription(BuiltInType value);

#include "BuiltInType.ipp"

}   // namespace LMI

#endif  // BUILTINTYPE_HPP
