/****************************************
* Filename: Point_3D.cpp
* 
* author: wille
* created: 2018- 08-09
* notes:
* 
* desc:
* 
* ver: 2018-08-09 first version
* 
* 
* *************************************/
    #include <iostream>
    #include "Point_3D.h"
 
    Point_3D::Point_3D(){
        z = 0;
    }
    Point_3D::Point_3D(double xCoord, double yCoord, double zCoord) : Point(xCoord, yCoord)  {
        z = zCoord;
        
    }
    double  Point_3D::getZ(){return z;}

    std::string Point_3D::get3DPoint(){
        return std::to_string(getX()) + " ; " + std::to_string(getY()) + " ; " + std::to_string(z) ;
    }

    double Point_3D::get3D_DistanceToPoint(Point_3D p){
        double dist, dist_2D, dz;
        dz = getZ() - p.getZ();
        dist_2D = getDistanceToPoint(p);
        dist = sqrt( (pow(dist_2D,2) + pow(dz,2))  );
        return dist;
    }