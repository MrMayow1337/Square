#include "Point.h"
#include <sstream>

Point::Point(double user_x, double user_y)
	:x(user_x), y(user_y)
{
}

std::string Point::to_string()
{
	std::stringstream buffer;
	buffer << this->x << " " << this->y;
	return buffer.str();
}

std::ostream& operator<<(std::ostream& os, Point& point) noexcept
{
	return os << point.to_string();
}
