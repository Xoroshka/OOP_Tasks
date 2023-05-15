#include "Point.hpp"

Fixed sign (Point a, Point b, Point c)
{
    return (a.get_x() - c.get_x()) * (b.get_y() - c.get_y())
		- (b.get_x() - c.get_x()) * (a.get_y() - c.get_y());
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1 = sign(point, a, b);
	Fixed d2 = sign(point, b, c);
	Fixed d3 = sign(point, c, a);

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}

