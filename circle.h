#pragma once
#include "shape2d.h"

class Circle : public Shape2D {
private:
    float radius;
public:
    Circle(float radius);
    virtual float GetArea() const override;
    virtual void Scale(float scaleFactor) override;
    virtual void ShowInfo() const override;
    virtual std::string GetName() const override;
};
