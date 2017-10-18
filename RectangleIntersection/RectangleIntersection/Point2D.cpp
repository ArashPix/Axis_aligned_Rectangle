#include "Point2D.h"

Point2D::Point2D(float _x, float _y):x(_x),y(_y)
{
}

float Point2D::get_x() const
{
	return x;
}

float Point2D::get_y() const
{
	return y;
}

bool Point2D::operator==(const Point2D& p) const
{
	return x == p.get_x() && y == p.get_y();
}


Point2D::~Point2D()
{
}
