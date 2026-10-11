
#include "Point.hpp"

Point::Point() : m_x(0.0), m_y(0.0) {
}

Point::Point(double x, double y) : m_x(x), m_y(y) {
}

double Point::getX() const {
    return m_x;
}

double Point::getY() const {
    return m_y;
}

void Point::setX(double x) {
    m_x = x;
}

void Point::setY(double y) {
    m_y = y;
}



