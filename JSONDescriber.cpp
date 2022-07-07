#include <iostream>
#include "JSONDescriber.hpp"
#include "cpp-library.hpp"

namespace LMI {

using std::endl;
using std::string;

#define OPEN_BRACKETS   "[{"
#define CLOSE_BRACKETS  "]}"
#define COMMAS          ","

const char* openBrackets = OPEN_BRACKETS;
const char* closeBrackets = CLOSE_BRACKETS;
const char* commas = COMMAS;
const char* newLineFollowChars = OPEN_BRACKETS COMMAS;

inline static void printIndent(std::ostream& out, int indentDepth, const char* tab);

void JSONDescriber::describe(std::ostream& out, const string& string, const char* tab) {
    int indentDepth = 0;
    char currentChar;
    char previousNonSpaceChar = '\0';

    const char* currentCharPointer = string.c_str();
    while (true) {
        currentChar = *currentCharPointer;

        if (currentChar == '\0')
            break;

        switch (currentChar) {
            case '{':
            case '[':
                if (included(previousNonSpaceChar, newLineFollowChars)) {
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
                if (!included(previousNonSpaceChar, openBrackets)) {
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
            case '\"':
                if (included(previousNonSpaceChar, newLineFollowChars)) {
                    out << endl;
                    printIndent(out, indentDepth, tab);
                }
                out << currentChar;
                ++currentCharPointer;
                currentChar = *currentCharPointer;
                out << currentChar;
                while (currentChar != '\"') {
                    ++currentCharPointer;
                    currentChar = *currentCharPointer;
                    out << currentChar;
                }
                previousNonSpaceChar = currentChar;
                break;
            default:
                if (included(previousNonSpaceChar, newLineFollowChars)) {
                    out << endl;
                    printIndent(out, indentDepth, tab);
                }
                out << currentChar;
                previousNonSpaceChar = currentChar;
                break;
        }

        ++currentCharPointer;
    }
}

void JSONDescriber::describe(const string& string) {
    JSONDescriber::describe(std::cout, string, "    ");
}

inline static void printIndent(std::ostream& out, int indentDepth, const char* tab) {
    for (int i = 0; i < indentDepth; ++i)
        out << tab;
}

}   // namespace LMI
