#ifndef BUILTINTYPE_IPP
#define BUILTINTYPE_IPP

#include <string>
#include <sstream>

namespace LMI {

template <typename BuiltInType>
std::string debugDescription(BuiltInType value) {
    std::ostringstream oss;

    oss << value;

    return oss.str();
}

template <typename BuiltInType>
std::string debugDescription(BuiltInType* value) {
    std::ostringstream oss;

    if (value == NULL)
        return "null";
    else
        oss << value;

    return oss.str();
}

}   // namespace LMI

#endif  // BUILTINTYPE_IPP
