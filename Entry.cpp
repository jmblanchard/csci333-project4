#include "Entry.h"

template <typename T>
Entry<T>::Entry(std::string k, T v) {
    key_ = k;
    value_ = v;
}

template <typename T>
Entry<T>::~Entry() {
}

template <typename T>
void Entry<T>::setValue(T v) {
    value_ = v;
}

template <typename T>
T Entry<T>::getValue() {
    return value_;
}

template <typename T>
std::string Entry<T>::getKey() {
    return key_;
}

template class Entry<int>;
template class Entry<double>;
template class Entry<std::string>;
