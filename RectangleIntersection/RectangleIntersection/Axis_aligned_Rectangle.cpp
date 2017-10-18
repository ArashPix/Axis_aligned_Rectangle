#include "Axis_aligned_Rectangle.h"

Axis_aligned_Rectangle::Axis_aligned_Rectangle(Point2D point, float _width, float _height): width(_width),height(_height),bLeft(point)
{
	float x = point.get_x();
	float y = point.get_y();
/*	bottomRight = Point2D(X + Width, Y);
	topLeft = Point2D(X, Y + Height);
	topRight = Point2D(X + Width, Y + Height);*/
}

Axis_aligned_Rectangle::Axis_aligned_Rectangle(const Axis_aligned_Rectangle& copyRec)
{
}

Axis_aligned_Rectangle& Axis_aligned_Rectangle::operator=(const Axis_aligned_Rectangle& rec)
{
}

bool Axis_aligned_Rectangle::operator==(const Axis_aligned_Rectangle& rec)
{
}

bool Axis_aligned_Rectangle::operator!=(const Axis_aligned_Rectangle& rec)
{
}

bool Axis_aligned_Rectangle::isColliding(Axis_aligned_Rectangle& a)
{
}

bool Axis_aligned_Rectangle::isColliding(Point2D& p)
{
}


Axis_aligned_Rectangle::~Axis_aligned_Rectangle()
{
}
