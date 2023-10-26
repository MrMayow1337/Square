#pragma once
#include <iostream>

class Point
{
	public:
		Point(double user_x = 0.0, double user_y = 0.0);
		friend std::ostream& operator<<(std::ostream& os, Point& point) noexcept;
		std::string to_string();

		double x;
		double y;
};