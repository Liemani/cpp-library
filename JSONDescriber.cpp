#include <iostream>
#include "JSONDescriber.hpp"

using std::endl;

inline static void printIndent(std::ostream& out, int indentDepth);

void JSONDescriber::describe(std::ostream& out, std::string string) {
    int indentDepth = 0;
    char previousNonSpaceChar;

    const char* currentPosition = &string[0];
    while (*currentPosition != '\0') {   // suppose string always ends with '\0'
        const char currentChar = *currentPosition;
        switch (currentChar) {
            case '{':
            case '[':
                out << currentChar << endl;
                ++indentDepth;
                printIndent(out, indentDepth);
                previousNonSpaceChar = currentChar;
                break;
            case '}':
            case ']':
                if (!(previousNonSpaceChar == ','
                        || previousNonSpaceChar == '{'
                        || previousNonSpaceChar == '['))
                    out << endl;
                --indentDepth;
                printIndent(out, indentDepth);
                out << currentChar;
                previousNonSpaceChar = currentChar;
                break;
            case ':':
                out << ": ";
                previousNonSpaceChar = currentChar;
                break;
            case ',':
                out << ',' << endl;
                printIndent(out, indentDepth);
                previousNonSpaceChar = currentChar;
                break;
            case '\t':
            case '\n':
            case ' ':
                break;
            default:
                out << currentChar;
                previousNonSpaceChar = currentChar;
                break;
        }
        ++currentPosition;
    }
}

inline static void printIndent(std::ostream& out, int indentDepth) {
    for (int i = 0; i < indentDepth; ++i)
        out << "    ";
}
