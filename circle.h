#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure{
    double _radius{};
    double _pi = 3.141592653589793;
public:
    Circle() = default;
    explicit Circle(double radius);

    [[nodiscard]] double getRadius() const { return _radius; }
    [[nodiscard]] double getArea() const override { return getRadius() * getRadius() * _pi; }
    void setRadius(double radius) { _radius = radius; }

};



#endif //CIRCLE_H
