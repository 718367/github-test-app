#include "rectangel.h"

rectangel::rectangel() : width(0), height(0) {}

rectangel::rectangel(float w, float h) : width(w), height(h) {}

float rectangel::get_width() {
    return width;
}

float rectangel::get_height() {
    return height;
}

void rectangel::set_width(float w) {
    width = w;
}

void rectangel::set_height(float h) {
    height = h;
}

float rectangel::get_area() {
    return width * height;
}


