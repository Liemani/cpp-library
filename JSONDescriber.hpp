#ifndef JSONDESCRIBER_HPP
#define JSONDESCRIBER_HPP

#include <string>

namespace LMI {

class JSONDescriber {
public:
    static void describe(std::ostream& out, const std::string& string, const char* tab);
};  // class JSONDescriber

}   // namespace LMI

#endif  // JSONDESCRIBER_HPP
