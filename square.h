#pragma once
#include "shape2d.h"

class Square : public Shape2D {
private:
    float side;
public:
    Square(float side);
    virtual float GetArea() const override;
    virtual void Scale(float scaleFactor) override;
    virtual void ShowInfo() const override;
    virtual std::string GetName() const override;
};
