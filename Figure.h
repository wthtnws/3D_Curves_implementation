#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <cmath>
constexpr double PI = 3.14159265358979323846;;

class Point
{
	private:
		double x, y, z;
	public:
		Point(double x, double y, double z);
		~Point();

		double getX() const;
		double getY() const;
		double getZ() const;

		std::string toString() const;

		static Point getRandom();

};

class Figure
{
	private:
		Point center;
	public:
		Figure(Point center);
		virtual ~Figure();

		virtual Point getPoint(double t) const = 0;
		virtual std::vector<double> getDerivative(double t) const = 0;

		Point getCenter() const;
};