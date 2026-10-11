

#ifndef POINT_HPP_
#define POINT_HPP_
class Point {
public:

	Point();
	    Point(double x, double y);

	    double getX() const;
	    double getY() const;

	    void setX(double x);
	    void setY(double y);



private:
	    double m_x;
	    double m_y;


};




#endif
