#ifndef FIGURE_H
#define FIGURE_H



class Figure {
public:
    Figure() = default;
    virtual ~Figure() = default;

    [[nodiscard]] virtual double getArea() const = 0;
};



#endif //FIGURE_H
