#pragma once
#include "Point.h"

class Square 
{
	private:
		Point center_point;
		double side;
		Point point_1;
		Point point_2;
		Point point_3;
		Point point_4;

	public:
		Square(double user_side, Point user_center_point);
		friend std::ostream& operator<<(std::ostream& os, Square& square) noexcept;
		double get_per();
		double get_area();
		double get_side();
		Point get_point_1();
		Point get_point_2();
		Point get_point_3();
		Point get_point_4();
		Point get_center_point();
		std::string to_string();
};