#pragma once
#include "shape2d.h"

class Square : public Shape2D {

private:
	float side;

	void CalculateArea() override {
		area = side * side;
	}
public:
	Square(float side_) {
		side = side_;
		CalculateArea();
	}

	void Scale(float ScaleFactor) override {
		side *= ScaleFactor;
		CalculateArea();
	}

	void ShowInfo() override {
		std::cout << "Square. Side is " << side << ". Area is " << area << std::endl;
	}

	std::string GetName() override {
		return "Square";
	}
};