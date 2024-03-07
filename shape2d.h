#pragma once
#include "shape.h"
class Shape2D : public Shape {

private:
    float area;

    virtual void CalculateArea() = 0;

public:

    Shape2D() {
        area = 0;
    };

    float GetArea() {
        return area;
    };

    bool operator>(Shape2D other) {
        return area > other.area;
    };

    bool operator<(Shape2D other) {
        return area > other.area;
    };


}
