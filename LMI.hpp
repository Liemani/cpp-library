#ifndef LMT_HPP
#define LMT_HPP

#include <string>
#include "cpp-library.hpp"

//  file for custom shortcut

namespace LMI {

inline void describe(std::ostream& out, const std::string& string, const char* tab = "    ") {
    JSONDescriber::describe(out, string, tab);
}

}   // namespace LMI

#endif  // LMT_HPP
