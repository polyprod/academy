/********************************
* Filename: selectionSort.c
* 
* author: filbri
* created: 2019-10-17
* 
* notes: an example of using the selection sort algorithm
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
    int tempNum;  // for swaps
    int minValue; // to keep track of minimum value
    int numbers[NUMBEROFVALUES];

    // creating an array with random numbers (unsorted)
    for (int i = 0; i < NUMBEROFVALUES; i++)
    {
        numbers[i] = rand();
    }

    // the selection sort algorithm
    for (int i = 0; i < NUMBEROFVALUES - 1; i++) // iterate through array n - 1 times
    {
        // index of leftmost element in unsorted part starts as minimum value
        minValue = i;
        // inner loop (j = i + 1 since we only need to go through the unsorted part)
        for (int j = i + 1; j < NUMBEROFVALUES; j++)
        {
            if (numbers[j] < numbers[minValue]) // compare numbers in array
            {
                minValue = j; // change current minimum index if a smaller number is found
            }
        }
        // after each pass, check if minValue no longer is the leftmost element of unsorted part
        if (minValue != i)
        {
            // swap leftmost element in unsorted part with the smallest number found after each pass
            tempNum = numbers[i];
            numbers[i] = numbers[minValue];
            numbers[minValue] = tempNum;
        }
        // print the sorting progress in %
        printf("\r %% %.3lf", (i + 1) / (double)(NUMBEROFVALUES - 1) * 100);
    }
    // print the sorted list
    printf("\nsorted list:");
    for (int i = 0; i < NUMBEROFVALUES; i++)
    {
        printf("%d, ", numbers[i]);
    }

    return 0;
}