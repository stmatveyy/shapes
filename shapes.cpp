#include <iostream>

#include "cylinder.h" // 3D
#include "triangular_pyramid.h"
#include "sphere.h"

#include "square.h" // 2D
#include "triangle.h"
#include "circle.h"

int main()
{
	// Square
	Square sq(5);
	sq.ShowInfo();
	sq.Scale(2);
	sq.ShowInfo();
	std::cout << sq.GetName() << std::endl;

	Square sq_smaller(3);
	std::cout << "Square is bigger than smaller one: " << (sq > sq_smaller) << std::endl;
	std::cout << "Smaller one is smaller: " << (sq_smaller < sq) << std::endl;
	std::cout << "Are they equal: " << (sq_smaller == sq) << "\n" << std::endl;

	// Circle
	Circle circle(3);
	circle.ShowInfo();
	circle.Scale(2);
	circle.ShowInfo();
	std::cout << "\n" << std::endl;

	// Triangle
	Triangle tri(3, 5);
	tri.ShowInfo();
	tri.Scale(2);
	tri.ShowInfo();
	std::cout << "\n" << std::endl;

	//Cylinder
	Cylinder cyl(3, 10);
	cyl.ShowInfo();
	cyl.Scale(2);
	cyl.ShowInfo();

	Cylinder cyl_smaller(2, 5);
	std::cout << "Cylinder is bigger than smaller one: " << (cyl > cyl_smaller) << std::endl;
	std::cout << "Smaller one is smaller: " << (cyl_smaller < cyl) << std::endl;
	std::cout << "Are they equal: " << (cyl == cyl_smaller) << "\n" << std::endl;

	// Sphere
	Sphere sphere(5);
	sphere.ShowInfo();
	sphere.Scale(2);
	sphere.ShowInfo();
	std::cout << "\n" << std::endl;

	// Pyramid
	TriangularPyramid piram(3, 7);
	piram.ShowInfo();
	piram.Scale(2);
	piram.ShowInfo();
}
