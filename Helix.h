#pragma once
#include "Circle.h"
class Helix: public Circle
{
	private:
		double step;
		double getStep() const;

	public:
		Helix(Point center, double radius, double step);
		~Helix();

		Point getPoint(double t) const;
		std::vector<double> getDerivative(double t) const;
};

