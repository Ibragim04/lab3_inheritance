#pragma once
#include "shape3d.h"

class TriangularPyramid : public Shape3D {
private:
    float height;
public:
    TriangularPyramid(float height);
    virtual float GetVolume() const override;
    virtual void Scale(float scaleFactor) override;
    virtual void ShowInfo() const override;
    virtual std::string GetName() const override;
};
