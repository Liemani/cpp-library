#ifndef BUILTINTYPE_HPP
#define BUILTINTYPE_HPP

#include <string>

namespace LMI {

template <typename BuiltInType>
std::string debugDescription(BuiltInType value);

template <typename BuiltInType>
std::string debugDescription(BuiltInType* value);

}   // namespace LMI

#include "BuiltInType.ipp"

#endif  // BUILTINTYPE_HPP
