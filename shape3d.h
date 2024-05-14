#pragma once
#include "shape.h"

class Shape3D : public Shape {
protected:
    float volume;
public:
    Shape3D();
    virtual float GetVolume() const = 0;
    bool operator>(const Shape3D& other) const;
    bool operator==(const Shape3D& other) const;
};
