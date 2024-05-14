#pragma once
#include "shape3d.h"

class Sphere : public Shape3D {
private:
    float radius;
public:
    Sphere(float radius);
    virtual float GetVolume() const override;
    virtual void Scale(float scaleFactor) override;
    virtual void ShowInfo() const override;
    virtual std::string GetName() const override;
};
