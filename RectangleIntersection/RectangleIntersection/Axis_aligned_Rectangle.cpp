#include "Axis_aligned_Rectangle.h"


Axis_aligned_Rectangle::Axis_aligned_Rectangle(const Point2D point, const float _width, const float _height): width(_width),height(_height),bLeft(point)
{
	float x = point.get_x();
	float y = point.get_y();

	bRight = Point2D(x + width, y);
	tLeft = Point2D(x, y + height);
	tRight = Point2D(x + width, y + height);
}

Axis_aligned_Rectangle::Axis_aligned_Rectangle(const Axis_aligned_Rectangle& copyRec)
{
	width = copyRec.width;
	height = copyRec.height;
	bLeft = copyRec.bLeft;
	bRight = copyRec.bRight;
	tLeft = copyRec.tLeft;
	tRight = copyRec.tRight;
}

Axis_aligned_Rectangle& Axis_aligned_Rectangle::operator=(const Axis_aligned_Rectangle& rec)
{
	if (this == &rec)
	{
		width = rec.width;
		height = rec.height;
		bLeft = rec.bLeft;
		bRight = rec.bRight;
		tLeft = rec.tLeft;
		tRight = rec.tRight;
	}
	return *this;
}

bool Axis_aligned_Rectangle::operator==(const Axis_aligned_Rectangle& rec) const
{
	return width == rec.width && height == rec.height && bLeft == rec.bLeft && bRight == rec.bRight && tLeft == rec.tLeft && tRight == rec.tRight;
}

bool Axis_aligned_Rectangle::operator!=(const Axis_aligned_Rectangle& rec)const
{
	return width != rec.width || height != rec.height || bLeft != rec.bLeft || bRight != rec.bRight || tLeft != rec.tLeft || tRight != rec.tRight;
}

bool Axis_aligned_Rectangle::isColliding(Axis_aligned_Rectangle& a) 
{

	if (isColliding(a.bLeft) || isColliding(a.bRight) || isColliding(a.tLeft) || isColliding(a.tRight) || 
		a.isColliding(bLeft) || a.isColliding(bRight) || a.isColliding(tLeft) || a.isColliding(tRight))
	{
		return true;
	}
	else {
		return false;
	}
}

bool Axis_aligned_Rectangle::isColliding(Point2D& p) const
{
	if (bLeft.get_x() <= p.get_x() && bRight.get_x() >= p.get_x() &&
		bLeft.get_y() <= p.get_y() && tLeft.get_y() >= p.get_y())
	{
		return true;
	}
	else {
		return false;
	}
}


Axis_aligned_Rectangle::~Axis_aligned_Rectangle()
{
}
