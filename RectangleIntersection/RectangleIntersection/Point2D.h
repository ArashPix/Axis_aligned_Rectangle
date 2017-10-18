#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

class Point2D
{
public:
	Point2D(float _x, float _y);
	float get_x() const;
	float get_y() const;
	bool operator==(const Point2D& p) const;
	~Point2D();

private:
	float x;
	float y;
};
