#ifndef BUILTINTYPE_HPP
#define BUILTINTYPE_HPP

namespace LMI {

template <typename BuiltInType>
void debugDescription(std::ostream& out, BuiltInType value);

#include "BuiltInType.ipp"

}   // namespace LMI

#endif  // BUILTINTYPE_HPP
