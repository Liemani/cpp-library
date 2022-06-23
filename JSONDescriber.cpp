#include <iostream>
#include "JSONDescriber.hpp"
#include "String.hpp"
#include "Char.hpp"

namespace LMI {

using std::endl;

#define OPEN_BRACKETS   "[{"
#define CLOSE_BRACKETS  "]}"
#define COMMAS          ","

String<const char> openBrackets = OPEN_BRACKETS;
String<const char> closeBrackets = CLOSE_BRACKETS;
String<const char> commas = COMMAS;
String<const char> newLineFollowChars = OPEN_BRACKETS COMMAS;

inline static void printIndent(std::ostream& out, int indentDepth, const char* tab);

void JSONDescriber::describe(std::ostream& out, const char* string, const char* tab) {
    int indentDepth = 0;
    Char<const char> previousNonSpaceChar;

    while (true) {
        const char currentChar = *string;

        if (currentChar == '\0')
            break;

        switch (currentChar) {
            case '{':
            case '[':
                if (previousNonSpaceChar.included(newLineFollowChars)) {
                    out << endl;
                    printIndent(out, indentDepth, tab);
                }
                out << currentChar;
                ++indentDepth;
                previousNonSpaceChar = currentChar;
                break;
            case '}':
            case ']':
                --indentDepth;
                if (!previousNonSpaceChar.included(openBrackets)) {
                    out << endl;
                    printIndent(out, indentDepth, tab);
                }
                out << currentChar;
                previousNonSpaceChar = currentChar;
                break;
            case ':':
                out << " : ";
                previousNonSpaceChar = currentChar;
                break;
            case ',':
                out << ',';
                previousNonSpaceChar = currentChar;
                break;
            case '\t':
            case '\n':
            case ' ':
                break;
            default:
                if (previousNonSpaceChar.included(newLineFollowChars)) {
                    out << endl;
                    printIndent(out, indentDepth, tab);
                }
                out << currentChar;
                previousNonSpaceChar = currentChar;
                break;
        }

        ++string;
    }
}

inline static void printIndent(std::ostream& out, int indentDepth, const char* tab) {
    for (int i = 0; i < indentDepth; ++i)
        out << tab;
}

}   // namespace LMI
