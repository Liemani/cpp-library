#ifndef LMT_HPP
#define LMT_HPP

#include "cpp-library.hpp"

//  file for custom shortcut

namespace LMI {

inline void describe(std::ostream& out, const char* string, const char* tab = "    ") {
    JSONDescriber::describe(out, string, tab);
}

}   // namespace LMI

#endif  // LMT_HPP
