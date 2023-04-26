#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

	// Private Attributes
		private:
			Fixed const x;
			Fixed const y;
	// Public Attributes & Member function
		public:
			Point(void);
			Point(float const num1, float const num2);
			~Point();
			Point(Point const& src);
			Point &operator=(Point const& src);

			float getX() const;
			float getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif