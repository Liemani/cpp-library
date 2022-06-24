template <typename CharType>
bool WrapChar<CharType>::included(CharType* string) const {
    while (*string != '\0') {
        if (*string == this->ch)
            return true;
        ++string;
    }

    return false;
}

template <typename CharType>
void WrapChar<CharType>::debugDescription(std::ostream& out) const {
    out << '\"';
    out << this->ch;
    out << '\"';
}
