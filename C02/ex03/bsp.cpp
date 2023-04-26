#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1 = 0.0;
	float d2 = 0.0;
	float d3 = 0.0;
	float res1 = 0.0;
	float res2 = 0.0;

	// D1=(x - xA)*(yC-yA)-(y-yA)*(xC-xA)
	d1 = (point.getX() - a.getX()) * (c.getY() - a.getY()) - (point.getY() - a.getY()) * (c.getX() - a.getX());

	// D2=(xA-x)(yB-yA)-(yA-y)(xB-xA)
	d2 = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (a.getY() - point.getY()) * (b.getX() - a.getX());

	// D3=(xB-xA)(yC-yA)-(yB-yA)(xC-xA)
	d3 = (b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX());

	// a=D1\D; b=D2\D;
	// Se a>0 and b>0 and a+b<1 allora P è interno al triangolo. Altrimenti è esterno (o sul bordo).

	res1 = d1 / d3;
	res2 = d2 / d3;
	if (res1 > 0 && res2 > 0 && (res1 + res2) < 1)
		return (true);
	else
		return (false);
}