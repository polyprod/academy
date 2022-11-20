/********************************
* Filename: average.c
* 
* author: filbri
* created: 2019-10-29
* 
* notes: this function calculates the average of an array of numbers.
* 
* ver: 2019-10-29 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>

void average(float array[])
{
    char text[7] = "Average"; // pass to writeToFile function
    float sum = 0;
    float average;

    for (int i = 0; i < AMOUNTOFNUMS; i++) // calculate the sum
    {
        sum += array[i];
    }
    average = sum / AMOUNTOFNUMS; // calculate the average
    writeToFile(text, 7, average); // call writeToFile function
    sortNumbers(array); // call next function
}