#pragma once
#include "Ellipse.h"
class Circle:public Ellipse
{
	public:
		Circle(Point center, double radius);
		~Circle();

		Point getPoint(double t) const;
		std::vector<double> getDerivative(double t) const;
};

