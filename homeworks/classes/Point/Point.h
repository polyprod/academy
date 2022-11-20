/****************************************
* Filename: Point.h
* 
* author: wille
* created: 2018- 08-03
* notes:
* 
* desc:
* 
* ver: 2018-08-03 first version
* 
* 
* *************************************/
#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <math.h>
#include <string>

class Point{

    public:
        Point();
        Point( double xCoord, double yCoord);
        double getDistanceToPoint(Point p);
        std::string getPoint();
        double getX();
        double getY();

    private:
        double x;
        double y;
};

#endif