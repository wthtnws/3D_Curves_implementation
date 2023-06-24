#pragma once
#include "Figure.h"
class Ellipse : public Figure
{
	private:
		double radius_a;
		double radius_b;
		double getRadiusB() const;
		
	public:

		Ellipse(Point center, double radius_a, double radius_b);

		~Ellipse();

		double getRadiusA() const;

		Point getPoint(double t) const;
		std::vector<double> getDerivative(double t) const;
};

