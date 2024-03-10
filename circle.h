#pragma once
#include <iostream>
#include <string>
#include "shape2d.h"
#define PI 3.1415

class Circle : public Shape2D {

private:

	void CalculateArea() override {
		area = PI * radius * radius;
	}
protected:
	float radius = 1;

public:
	Circle(float radius_) {
		radius = radius_;
		CalculateArea();
	}

	void Scale(float ScaleFactor) override {
		radius *= ScaleFactor;
		CalculateArea();
	}

	void ShowInfo() override {
		std::cout << "Circle. Radius is " << radius << ". Area is " << area << std::endl;
	}

	std::string GetName() override {
		return "Circle";
	}
};