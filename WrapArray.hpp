#ifndef WRAPARRAY_HPP
#define WRAPARRAY_HPP

#include <string>

namespace LMI {

template <typename ElementType>
class WrapArray {
private:
    ElementType* address;
    std::size_t count;

public:
    WrapArray(ElementType* address, std::size_t count): address(address), count(count) {};

    void debugDescription(std::ostream& out) const;
};  // class WrapArray

#include "WrapArray.ipp"

}   // namespace LMI

#endif  // WRAPARRAY_HPP
