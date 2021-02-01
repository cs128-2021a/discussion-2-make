#include "point.h"
#include <cmath>

Point::Point(): x_(0), y_(0), z_(0) {}

Point::Point(int x, int y, int z) : x_(x), y_(y), z_(z) { }

float Point::len() const {
    return sqrt(pow(this->x(), 2) + pow(this->y(), 2) + pow(this->z(), 2));
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
  os << "(" << point.x() << "," << point.y() << "," << point.z() << ")";
  return os;
}

bool operator==(const Point& rhs, const Point& lhs) {
    return (rhs.x() == lhs.x() && rhs.y() == lhs.y() && rhs.z() == lhs.z());
}