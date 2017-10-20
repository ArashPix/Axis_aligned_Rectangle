#pragma once
#include "Point2D.h"

class Edge2D
{
public:
	Edge2D();

	~Edge2D();

private: 
	Point2D start;
	Point2D end;
};

