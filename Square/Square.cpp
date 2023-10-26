#include "Square.h"
#include <string>
#include <sstream>

Square::Square(double user_side, Point user_center_point)
	:side(user_side), center_point(user_center_point)
{
	this->point_1 = Point(user_center_point.x - side / 2, user_center_point.y - side / 2);
	this->point_2 = Point(user_center_point.x - side / 2, user_center_point.y + side / 2);
	this->point_3 = Point(user_center_point.x + side / 2, user_center_point.y + side / 2);
	this->point_4 = Point(user_center_point.x + side / 2, user_center_point.y - side / 2);
}

double Square::get_per()
{
	return 4 * this->side;
}

double Square::get_area()
{
	return this->side * this->side;
}

double Square::get_side()
{
	return this->side;
}

Point Square::get_point_1()
{
	return this->point_1;
}

Point Square::get_point_2()
{
	return this->point_2;
}

Point Square::get_point_3()
{
	return this->point_3;
}

Point Square::get_point_4()
{
	return this->point_4;
}

Point Square::get_center_point()
{
	return this->center_point;
}

std::string Square::to_string()
{
	std::stringstream buffer;
	buffer << this->get_point_1() << this->get_point_2() << this->get_point_3() << this->get_point_4();
	return buffer.str();
}

std::ostream& operator<<(std::ostream& os, Square& square) noexcept
{
	return os << square.to_string();
}
