#ifndef WRAPARRAY_HPP
#define WRAPARRAY_HPP

#include <iostream>

namespace LMI {

template <typename ElementType>
struct WrapArray {
    const ElementType* address;
    std::size_t count;

    WrapArray(const ElementType* address, std::size_t count): address(address), count(count) {};
};  // struct WrapArray

template <typename ElementType>
void debugDescription(std::ostream& out, const WrapArray<ElementType>& wrapArray);

#include "WrapArray.ipp"

}   // namespace LMI

#endif  // WRAPARRAY_HPP
