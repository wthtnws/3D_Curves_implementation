#include "Circle.h"

Circle::Circle(Point center, double radius):Ellipse(center, radius, radius)
{
	//std::cout << "Constructor Circle()" << std::endl;
}

Circle::~Circle()
{
	//std::cout << "Destructor Circle()" << std::endl;
}

Point Circle::getPoint(double t) const
{
	double x = getRadiusA() * cos(t) + getCenter().getX();
	double y = getRadiusA() * sin(t) + getCenter().getY();
	double z = 0.0;
	return Point(x,y,z);
}

std::vector<double> Circle::getDerivative(double t) const
{
	double dx = (-1) * getRadiusA() * sin(t);
	double dy = getRadiusA() * cos(t);
	double dz = 0.0;
	return std::vector<double> {dx,dy,dz};
}
