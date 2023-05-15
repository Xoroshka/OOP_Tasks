#include <iostream>
#include <iomanip>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	
	Point a(0, -1);
	Point b(0, 3);
	Point c(3, 0);

	Point p1(-1, 1);
	Point p2(1, 1);
	Point p3(1.5, 1.5);

	bool p1_in_triangle = bsp(a, b, c, p1);
	std::cout << "p1 in triangle: " << std::boolalpha
		<< p1_in_triangle << std::endl;

	bool p2_in_triangle = bsp(a, b, c, p2);
	std::cout << "p2 in triabgle: " << std::boolalpha
		<< p2_in_triangle << std::endl;

	bool p3_in_triangle = bsp(a, b, c, p3);
	std::cout << "p3 in triabgle: " << std::boolalpha
		<< p3_in_triangle << std::endl;

	return 0;
}