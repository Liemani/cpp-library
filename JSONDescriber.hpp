#ifndef JSONDESCRIBER_HPP
#define JSONDESCRIBER_HPP

namespace LMI {

class JSONDescriber {
public:
    static void describe(std::ostream& out, const char* string, const char* tab);
};  // class JSONDescriber

}   // namespace LMI

#endif  // JSONDESCRIBER_HPP
