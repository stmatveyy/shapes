#pragma once
#include "shape3d.h"
#include "circle.h"
#ifndef CYLINDER_H
#define CYLINDER_H
#define PI 3.1415

class Cylinder : public Shape3D {

private:
	Circle baseCircle;
	float height;

	void CalculateVolume() override {
		volume = baseCircle.GetArea() * height;
	}

public:
	Cylinder(float radius, float height_) : baseCircle(radius) {
		height = height_;
		CalculateVolume();
	}

	void Scale(float scaleFactor) override {
		baseCircle.Scale(scaleFactor);
		height *= scaleFactor;
		CalculateVolume();
	}

	void ShowInfo() override {
		std::cout << "Cylinder. Radius is " << std::sqrt(baseCircle.GetArea() / PI)
			<< " height is " << height << ". Volume is " << volume
			<< std::endl;
	}

	std::string GetName() override { return "Cylinder"; }
};

#endif