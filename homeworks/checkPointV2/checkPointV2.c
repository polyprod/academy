/********************************
* Filename: checkPointV2.c
* 
* author: filbri
* created: 2019-10-29
* 
* notes: This program reads a file with different temperature values 
* and stores them in an array. It then calculates and prints the average 
* to a file (tempResult.dat). It also sorts the array in ascending order, 
* calculates the median value and prints it to tempResult.dat.
* 
* 
* ver: 2019-10-29 second version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h" // import function declarations

int main()
{
    readNumbers(); // call first function of program
    
    return 0;
}
