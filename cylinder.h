#pragma once
#include "shape3d.h"

class Cylinder : public Shape3D {
private:
    float height;
public:
    Cylinder(float height);
    virtual float GetVolume() const override;
    virtual void Scale(float scaleFactor) override;
    virtual void ShowInfo() const override;
    virtual std::string GetName() const override;
};
