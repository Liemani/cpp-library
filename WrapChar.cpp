#include <string>
#include "WrapChar.hpp"
#include "cpp-library.hpp"

namespace LMI {

std::string debugDescription(const WrapChar& ch) {
    return debugDescription(ch.value);
}

}   // namespace LMI
