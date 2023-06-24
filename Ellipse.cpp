#include "Ellipse.h"

Ellipse::Ellipse(Point center, double radius_a, double radius_b):
	Figure(center)
{
	//std::cout << "Constructor Ellipse()" << std::endl;
	if (radius_a <= 0 || radius_b <= 0)
	{
		throw std::invalid_argument("Radius must be non-negative");
	}

	this->radius_a = radius_a;
	this->radius_b = radius_b;
}

Ellipse::~Ellipse()
{
	//std::cout << "Destructor Ellipse()" << std::endl;
}

double Ellipse::getRadiusA() const
{
	return radius_a;
}

double Ellipse::getRadiusB() const
{
	return radius_b;
}

Point Ellipse::getPoint(double t) const
{
	double x = getRadiusA() * cos(t) + getCenter().getX();
	double y = getRadiusB() * sin(t) + getCenter().getY();
	double z = 0.0;
	return Point(x, y, z);
}

std::vector<double> Ellipse::getDerivative(double t) const
{
	double dx = (-1) * getRadiusA() * sin(t);
	double dy = getRadiusB() * cos(t);
	double dz = 0.0;
	return std::vector<double> {dx, dy, dz};
}
