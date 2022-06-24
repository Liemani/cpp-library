template <typename CharType>
bool WrapCString<CharType>::contains(char ch) const {
    while (*this->string != '\0')
        if (*this->string == ch)
            return true;

    return false;
}

template <typename CharType>
void WrapCString<CharType>::debugDescription(std::ostream& out) const {
    out << '\"';
    out << this->string;
    out << '\"';
}
