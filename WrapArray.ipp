#include "BuiltInType.hpp"
#include "BuiltInChar.hpp"

#include <string>

namespace LMI {

template <typename ElementType>
std::string debugDescription(const WrapArray<ElementType>& array) {
    std::string description;

    description += '[';
    const ElementType* elementPointer = array.address;
    for (std::size_t i = 0; i < array.count; ++i) {
        description += debugDescription(*elementPointer) + ',';
        ++elementPointer;
    }
    description += ']';

    return description;
}

}   // namespace LMI
