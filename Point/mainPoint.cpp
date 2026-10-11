

#include <iostream>
#include "Point.hpp"

using namespace std;

int mainPoint() {
    Point p1;

    cout << "Premier point :" << endl;
    cout << "x = " << p1.getX() << endl;
    cout << "y = " << p1.getY() << endl;

    Point p2(8.0, 4.0);

    cout << "\nDeuxieme point :" << endl;
    cout << "x = " << p2.getX() << endl;
    cout << "y = " << p2.getY() << endl;

    p2.setX(9.0);

    cout << "\nApres modification :" << endl;
    cout << "x = " << p2.getX() << endl;
    cout << "y = " << p2.getY() << endl;

    return 0;
}




