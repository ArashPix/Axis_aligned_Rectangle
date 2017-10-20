#pragma once
#include "Point2D.h"

class Axis_aligned_Rectangle
{
public:
	Axis_aligned_Rectangle();
	Axis_aligned_Rectangle(const Point2D& point, const float _width, const float _height);
	Axis_aligned_Rectangle(const Axis_aligned_Rectangle& copyRec);

	Axis_aligned_Rectangle& operator=(const Axis_aligned_Rectangle& rec);
	bool operator==(const Axis_aligned_Rectangle& rec) const;
	bool operator!=(const Axis_aligned_Rectangle& rec) const;

	bool isColliding(Axis_aligned_Rectangle& a);
	bool isColliding(Point2D& p) const;

	~Axis_aligned_Rectangle();

private:
	float width;
	float height;

	Point2D bLeft;
	Point2D bRight;
	Point2D tLeft;
	Point2D tRight;


};
