#ifndef __POINT_H__
#define __POINT_H__
#include "Fixed.hpp"

class Point
{
	const Fixed x;
	const Fixed y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &other);
		Point &operator=(const Point &other);
		~Point();

		const Fixed &get_x() const;
		const Fixed &get_y() const;
};
#endif