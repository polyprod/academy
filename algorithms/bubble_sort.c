/********************************
* Filename: bubbleSort.c
* 
* author: filbri
* created: 2019-10-17
* 
* notes: an example of using the bubble sort algorithm
* 
* ver: 2019-10-17 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

#define NUMBEROFVALUES 100000 // the amount of numbers to be sorted

int main()
{
    int temp;
    int numbers[NUMBEROFVALUES];

    // creating an array with random numbers (unsorted)
    for (int i = 0; i < NUMBEROFVALUES; i++)
    {
        numbers[i] = rand();
    }

    // loop for ALL indexes
    for (int i = 0; i < NUMBEROFVALUES; i++)
    {
        for (int i = 0; i < (NUMBEROFVALUES - 1); i++)
        {
            if (numbers[i] > numbers[i + 1]) // check if an lower element is higher than an element one index higher
            {
                temp = numbers[i + 1]; // if it is, swap places!
                numbers[i + 1] = numbers[i];
                numbers[i] = temp;
            }
        }
        // print the sorting progress in %
        printf("\r %% %.3lf", (i + 1) / (double)NUMBEROFVALUES * 100);
    }

    // print the array
    for (int i = 0; i < NUMBEROFVALUES; i++)
    {
        printf("%d, ", numbers[i]);
    }

    return 0;
}