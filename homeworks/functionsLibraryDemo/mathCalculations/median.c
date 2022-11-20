/********************************
* Filename: median.c
* 
* author: filbri
* created: 2019-10-29
* 
* notes: this function calculates the median of an array of numbers
* 
* ver: 2019-10-29 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>

void median(float array[])
{
    char text[6] = "Median"; // pass to writeToFile function
    float median = 0;
    if (AMOUNTOFNUMS % 2 == 0) // if number of elements are even
    {
        median = (array[(AMOUNTOFNUMS - 1) / 2] + array[AMOUNTOFNUMS / 2]) / 2;
    }
    else
    {
        median = array[AMOUNTOFNUMS / 2];
    }
    writeToFile(text, 6, median); // call writeToFile function
}