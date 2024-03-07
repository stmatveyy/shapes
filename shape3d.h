#pragma once
#include "shape.h"

class Shape3D : public Shape {

private:
    float volume;

    virtual void CalculateVolume() = 0;


public:

    Shape3D() {
        volume = 0;
    };

    float GetVolume() {
        return volume;
    }

    bool operator<(Shape3D other) {
        return volume < other.volume;

    }

    bool operator>(Shape3D other) {
        return volume > other.volume;
    }

    bool operator==(Shape3D other) {
        return volume == other.volume;

    }
}