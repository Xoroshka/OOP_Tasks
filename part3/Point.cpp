#include "Point.hpp"

Point::Point() : x(0), y(0) {};
Point::Point(const float x, const float y) : x(x), y(y) {};
Point::Point(const Point &other) : x(other.x), y(other.y) {};
Point &Point::operator=(const Point &other)
{
	(void)other;
	return *this; 
};
Point::~Point() {};

const Fixed &Point::get_x() const
{
	return x;
}

const Fixed &Point::get_y() const
{
	return y;
}