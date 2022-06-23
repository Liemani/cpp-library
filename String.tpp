template <typename CharType>
bool String<CharType>::contains(CharType ch) {
    while (*this->string != '\0')
        if (*this->string == ch)
            return true;

    return false;
}
