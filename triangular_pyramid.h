#pragma once
#include "shape3d.h"
#include "triangle.h"

class TriangularPyramid : public Shape3D {
private:

	float height;
	Triangle baseTriangle;

	void CalculateVolume() override {
		volume = 1/3 * baseTriangle.GetArea() * height;
	}

public:
	TriangularPyramid(float base_, float height_) : baseTriangle(base_, height_) {
		height = height_;
		CalculateVolume();
	}

	void Scale(float ScaleFactor) override {
		height *= ScaleFactor;
		CalculateVolume();
	}

	void ShowInfo() override {
		std::cout << "Triangular Pyramid. Height is " << height << ". Volume is " << volume << std::endl;
	}

	std::string GetName() override {
		return "Triangular Pyramid";
	}
};