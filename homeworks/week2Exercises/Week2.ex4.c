/*
 Filename: Week2ex4.c
  
 Author: filbri
 Created: 2019-09-26
  
 Notes: This program calculates the range and area of a circle,
 using the header file Week2.ex4.h 
  
 Ver: 2019-09-26 first version
 */

#include <stdio.h>
#include "Week2.ex4.h"

int main()
{
    int radiusCircle = 12;

    int rangeCircle = 2 * PI * radiusCircle;
    int areaCircle = PI * (radiusCircle * radiusCircle);
    
    printf("The range of the circle is %d.\n", rangeCircle); 
    printf("The area of the circle is %d.\n", areaCircle); 

    return 0;
}