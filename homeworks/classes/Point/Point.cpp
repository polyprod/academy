/****************************************
* Filename: Point.cpp
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

#include <iostream>
#include <math.h>
#include <string>

#include "Point.h"

    Point::Point(){
        x = 0;
        y = 0;
    }
    Point::Point( double xCoord, double yCoord){
         x = xCoord;
         y = yCoord;
    }
    double Point::getDistanceToPoint(Point p){
        double dist, dx, dy;
        dx = x - p.x;
        dy = y - p.y;
        dist = sqrt( (pow(dx,2) + pow(dy,2))  );
        return dist;
    }

    std::string Point::getPoint(){
        return std::to_string(x) + " ; " + std::to_string(y);
    }
    double Point::getX(){return x;}
    double Point::getY(){return y;}


