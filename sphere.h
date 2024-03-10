#pragma once
#include <iostream>
#include "shape3d.h"
#ifndef SPHERE_H
#define SPHERE_H
#define PI 3.1415

class Sphere : public Shape3D {
private:
	float radius;

	void CalculateVolume() override {
		volume = ((3 / 4) * PI * radius * radius * radius);
	}

public:
	Sphere(float radius_) {
		radius = radius_;
		CalculateVolume();
	}

	void Scale(float ScaleFactor) override {
		radius *= ScaleFactor;
		CalculateVolume();
	}

	void ShowInfo() override {
		std::cout << "Sphere. Radius is " << radius << ". Volume is " << volume << std::endl;
	}

	std::string GetName() override {
		return "Sphere";
	}
};

#endif