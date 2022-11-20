/****************************************
* Filename: 3DPoint.h
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

#include "Point.h"

class Point_3D : public Point{

    public:
        Point_3D();
        Point_3D(double xCoord, double yCoord, double zCoord);
        std::string get3DPoint();
        double getZ();
        double get3D_DistanceToPoint(Point_3D p);
        
    private:
        double z;

};