#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"
#include "circle.h"

class Rectangle : public Figure, public Circle{
protected:
    int _width{};
    int _height{};

public:
    Rectangle(int width, int height);
    Rectangle(int width, int height, double radius);
    virtual ~Rectangle();

    [[nodiscard]] int getWidth() const { return _width; }
    [[nodiscard]] int getHeight() const { return _height; }
    [[nodiscard]] double getArea() const override { return _width * _height; }

    void setWidth(int width) { _width = width; }
    void setHeight(int height) { _height = height; }
};



#endif //RECTANGLE_H
