/****************************************
* Filename: test_point.cpp
* 
* author: wille
* created: 2018- 08-04
* notes:
* 
* desc:
* 
* ver: 2018- 08-04 first version
* 
* 
* *************************************/
#include <iostream>
#include <string>
#include "Point_3D.h"

int main(int argc,char* argv[]){

    Point p1 = Point(4.0, 5.0);
    Point_3D p2 = Point_3D(0, 0, 0);
    Point_3D p3 = Point_3D(3, 4 , 8);

    std::cout << "P1: " << p1.getPoint() << std::endl;
    std::cout << "P2: " << p2.get3DPoint() << std::endl;
    std::cout << "P3: " << p3.get3DPoint() << std::endl;

    std::cout << "Distance(2D) between p2 and p3: " << p2.getDistanceToPoint(p3) << std::endl;
    std::cout << "Distance(3D) between p2 and p3: " << p2.get3D_DistanceToPoint(p3) << std::endl;

    return 0;

}