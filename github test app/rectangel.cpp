#include "rectangel.h"

template<typename T>
rectangel<T>::rectangel(void) : width(0), height(0) {}

template<typename T>
rectangel<T>::rectangel(T w, T h) : width(w), height(h) {}

template<typename T>
T rectangel<T>::get_width(void) {
    return width;
}

template<typename T>
T rectangel<T>::get_height(void) {
    return height;
}

template<typename T>
void rectangel<T>::set_width(T w) {
    width = w;
}

template<typename T>
void rectangel<T>::set_height(T h) {
    height = h;
}

template<typename T>
T rectangel<T>::get_area(void) {
    return width * height;
}

template class rectangel<int>;
template class rectangel<double>;
template class rectangel<float>;
