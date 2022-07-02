#include <string>
#include <sstream>

namespace LMI {

template <typename BuiltInType>
std::string debugDescription(BuiltInType value) {
    std::ostringstream oss;

    oss << value;

    return oss.str();
}

}   // namespace LMI
