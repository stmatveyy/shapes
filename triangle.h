#pragma once
#include "shape2d.h"

class Triangle : public Shape2D {
private:
	float base;
	float height;

protected:
	void CalculateArea() override {
		area = 0.5 * base * height;
	}

public:
	Triangle(float base_, float height_) {
		base = base_;
		height = height_;
		CalculateArea();
	}

	void Scale(float ScaleFactor) override {
		base *= ScaleFactor;
		height *= ScaleFactor;
		CalculateArea();
	}

	void ShowInfo() override {
		std::cout << "Triangle. Base is " << base << ". Height is " << height << ". Area is " << area << std::endl;
	}

	std::string GetName() override {
		return "Triangle";
	}
};