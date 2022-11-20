/********************************
* Filename: ascending.c
* 
* author: filbri
* created: 2019-10-29
* 
* notes: this function sorts an array in ascending order using selection sort 
* 
* ver: 2019-10-29 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>

void ascendingOrder(float array[], int arraySize)
{
    int minValue;
    float tempNum;
    for (int i = 0; i < arraySize - 1; i++) // iterate through array n - 1 times
    {
        minValue = i; // index of leftmost element in unsorted part starts as minimum value
        for (int j = i + 1; j < arraySize; j++) // inner loop (j = i + 1 since we only need to go through the unsorted part)
        {
            if (array[j] < array[minValue]) // compare numbers in array
            {
                minValue = j; // change current minimum index if a smaller number is found
            }
        }
        if (minValue != i) // after each pass, check if minValue no longer is the leftmost element of unsorted part
        {
            tempNum = array[i]; // swap leftmost element in unsorted part with the smallest number found after each pass
            array[i] = array[minValue];
            array[minValue] = tempNum;
        }
        printf("\r %% %.3lf", (i + 1) / (double)(arraySize - 1) * 100); // print the sorting progress in %
    }
}