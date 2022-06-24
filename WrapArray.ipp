template <typename ElementType>
void WrapArray<ElementType>::debugDescription(std::ostream& out) const {
    out << '[';
    ElementType* element = this->address;
    for (std::size_t i = 0; i < this->count; ++i) {
        element->debugDescription(out);
        out << ",";
        ++element;
    }
    out << ']';
}
