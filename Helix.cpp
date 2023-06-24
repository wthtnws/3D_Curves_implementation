#include "Helix.h"
Helix::Helix(Point center, double radius, double step):
	Circle(center, radius),
	step(step)
{
	//std::cout << "Constructor Helix()" << std::endl;
}

Helix::~Helix()
{
	//std::cout << "Destructor Helix()" << std::endl;
}

double Helix::getStep() const
{
	return step;
}

Point Helix::getPoint(double t) const
{
	double x = getRadiusA() * cos(t) + getCenter().getX();
	double y = getRadiusA() * sin(t) + getCenter().getY();
	double z = getStep() * t / (2.0 * PI);
	return Point(x,y,z);
}

std::vector<double> Helix::getDerivative(double t) const
{
	std::vector<double> vec = Circle::getDerivative(t);
	double dz = getStep() / (2.0 * PI);
	vec[2] = dz;
	return vec;
}
