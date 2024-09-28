#include <iostream>
#include <ostream>

#include "rectangle.h"
using namespace std;

int main() {
    Rectangle* rec = new Rectangle(5, 6, 2.5);

    cout << "Rectangle created: ";
    cout << rec << endl;
    cout << "Rectangle area: " << rec->getArea() << endl;
    cout << "Circle area: " << rec->Circle::getArea() << endl;

    delete rec;
    return 0;
}