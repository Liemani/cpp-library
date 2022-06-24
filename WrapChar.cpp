#include <iostream>
#include "WrapChar.hpp"
#include "cpp-library.hpp"

namespace LMI {

void debugDescription(std::ostream& out, const WrapChar& wrapChar) {
    debugDescription(out, wrapChar.value);
}

}   // namespace LMI
