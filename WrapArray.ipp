#include "BuiltInType.hpp"

template <typename ElementType>
void debugDescription(std::ostream& out, const WrapArray<ElementType>& wrapArray) {
    out << '[';
    const ElementType* elementPointer = wrapArray.address;
    for (std::size_t i = 0; i < wrapArray.count; ++i) {
        debugDescription(out, *elementPointer);
        out << ',';
        ++elementPointer;
    }
    out << ']';
}
