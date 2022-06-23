#ifndef JSONDESCRIBER_HPP
#define JSONDESCRIBER_HPP

#include <string>

class JSONDescriber {
public:
    static void describe(std::ostream& out, std::string string);
};  // class JSONDescriber

#endif  // JSONDESCRIBER_HPP
