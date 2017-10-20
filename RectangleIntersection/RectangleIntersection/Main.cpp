#include "Axis_aligned_Rectangle.h"
#include <iostream>

using namespace std;


int main()
{
	
		cout << "Testing constructing Axis_aligned_Rectangles using width, height, and an initial point." << endl;
	Axis_aligned_Rectangle rect1 = Axis_aligned_Rectangle(Point2D(6.2, 5.7),1.56f,2.9f);
	cout << "rect1 should be (1.56, 8.6), (7.76, 8.6), (7.76, 2.9), (1.56, 2.9)" << endl;
	cout << " rect1 results: ";

	Axis_aligned_Rectangle rect2 = Axis_aligned_Rectangle(Point2D(3, 4),8,4);
	cout << "rect2 should be (-8, 4), (-3, 4), (-3, -4), (-8, -4)" << endl;
	cout << " rect2 results: ";

	if (rect1.isColliding(rect2))
	{
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	cout << "\nTesting constructing points and collision with Axis_aligned_Rectangles." << endl;

	Point2D pGrey = Point2D(6.66,8.27);
	Point2D pYellow = Point2D(3.875,-3.4);
	Point2D pPink = Point2D(-5,7);
	Point2D pRed = Point2D(-7,3);


	cout << "Is pGrey colliding with rect1?" << endl;
	cout << "Expect: Yes	Result: ";
	if (rect1.isColliding(pGrey))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << "Is pYellow colliding with rect1?" << endl;
	cout << "Expect: No	Result: ";
	if (rect1.isColliding(pYellow))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << "Is pPink colliding with rect2?" << endl;
	cout << "Expect: No	Result: ";
	if (rect2.isColliding(pPink))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << "Is pRed colliding with rect2?" << endl;
	cout << "Expect: Yes	Result: ";
	if (rect2.isColliding(pRed))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}


	/*
	cout << "\nTesting contructing Axis_aligned_Rectangles using two points." << endl;
	Axis_aligned_Rectangle rect3 = Axis_aligned_Rectangle(pGrey,pYellow);
	cout << "rect3 should be (3.875, 3.27), (6.66, 3.27), (6.66, -3.4), (3.875, -3.4)" << endl;
	cout << " rect3 results: ";


	Axis_aligned_Rectangle rect4 = Axis_aligned_Rectangle(pRed,pPink);
	cout << "rect4 should be (-7, 7), (-5, 7), (-5, 3), (-7, 3)" << endl;


	cout << "\nTesting collision between two Axis_aligned_Rectangles." << endl;

	cout << "Is rect1 colliding with rect2?" << endl;
	cout << "Expect: No	Result: ";
	if (rect1.isColliding(rect2))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << "Is rect2 colliding with rect4?" << endl;
	cout << "Expect: Yes	Result: ";
	if (rect2.isColliding(rect4))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << "Is rect4 colliding with rect2?" << endl;
	cout << "Expect: Yes	Result: ";
	if (rect4.isColliding(rect2))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << "Is rect3 colliding with rect1?" << endl;
	cout << "Expect: Yes	Result: ";
	if (rect3.isColliding(rect1))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << "Is rect1 colliding with rect3?" << endl;
	cout << "Expect: Yes	Result: ";
	if (rect1.isColliding(rect3))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << "Is rect4 colliding with rect3?" << endl;
	cout << "Expect: No	Result: ";
	if (rect4.isColliding(rect3))
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	cout << "\nTesting copy constructor." << endl;
	Axis_aligned_Rectangle rect5(rect1);
	cout << "Expect: (1.56, 8.6), (7.76, 8.6), (7.76, 2.9), (1.56, 2.9)" << endl;
	cout << "Result: ";

	cout << "\nTesting assignment operator" << endl;
	Axis_aligned_Rectangle rect6 = rect2;
	cout << "Expect: (-8, 4), (-3, 4), (-3, -4), (-8, -4)" << endl;
	cout << "Result: ";
	*/
}