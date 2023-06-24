#include "Figure.h"

Point::Point(double x, double y, double z) :x(x), y(y), z(z)
{

}

Point::~Point()
{

}

double Point::getX() const
{
	return this->x;
}

double Point::getY() const
{
	return this->y;
}

double Point::getZ() const
{
	return this->z;
}

std::string Point::toString() const
{
	return std::string("Point has XYZ coordinates: { "
		+ std::to_string(getX()) + ", "
		+ std::to_string(getY()) + ", "
		+ std::to_string(getZ()) + " }");
}

Point Point::getRandom()
{
	return Point(
		(double)(rand() % 100), 
		(double)(rand() % 100), 
		(double)(rand() % 100));
}

Figure::Figure(Point center):center(center)
{
	//std::cout << "Constructor Figure() with center: " << this->center.getX() << std::endl;
}

Figure::~Figure()
{
	//std::cout << "Destructor Figure() with center: " << this->center.getX() << std::endl;
}

Point Figure::getCenter() const	
{
	return center;
}
