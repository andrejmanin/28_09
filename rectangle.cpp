#include "rectangle.h"

Rectangle::Rectangle(int width, int height) {
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, double radius) : Rectangle(width, height) {
    setRadius(radius);
}

Rectangle::~Rectangle() {
    setWidth(0);
    setHeight(0);
    setRadius(0);
}

