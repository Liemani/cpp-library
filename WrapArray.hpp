#ifndef WRAPARRAY_HPP
#define WRAPARRAY_HPP

#include <string>

namespace LMI {

template <typename ElementType>
struct WrapArray {
    const ElementType* address;
    std::size_t count;

    WrapArray(const ElementType* address, std::size_t count): address(address), count(count) {};
};  // struct WrapArray

template <typename ElementType>
std::string debugDescription(const WrapArray<ElementType>& array);

}   // namespace LMI

#include "WrapArray.ipp"

#endif  // WRAPARRAY_HPP
