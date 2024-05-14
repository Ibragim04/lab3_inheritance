#pragma once
#include "shape2d.h"

class Triangle : public Shape2D {
private:
    float base;
    float height;
public:
    Triangle(float base, float height);
    virtual float GetArea() const override;
    virtual void Scale(float scaleFactor) override;
    virtual void ShowInfo() const override;
    virtual std::string GetName() const override;
};
