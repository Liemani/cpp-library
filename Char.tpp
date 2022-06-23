template <typename CharType>
bool Char<CharType>::included(CharType* string) {
    while (*string != '\0') {
        if (*string == this->ch)
            return true;
        ++string;
    }

    return false;
}
