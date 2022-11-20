/********************************
* Filename: functions.c
* 
* author: filbri
* created: 2019-10-29
* 
* notes: This file contains function definitions for the
* checkPointV2.c program
* 
* ver: 2019-10-29 second version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h" // import function declarations
#define AMOUNTOFNUMS 1613
#define WRITEFILE "tempResult.dat"

void readNumbers()
{
    float numbers[AMOUNTOFNUMS]; // to hold the input from file
    int ctr = 0;                 // array counter
    FILE *fptr;                  // file pointer definition

    fptr = fopen("temp.dat", "r"); // open file in read mode
    if (fptr != 0)
    {
        while (!feof(fptr)) // feof returns true when the last line been read
        {
            float tempNum;
            fscanf(fptr, "%f", &tempNum);
            numbers[ctr] = tempNum; // store read number in array
            ctr++;
        }
    }
    else
    {
        printf("\nError opening the file!\n");
    }
    fclose(fptr); // close file
    averageTemp(numbers); // call next function
}

void writeToFile(char text[], int textLength, float number)
{
    FILE *fptr; // file pointer definition

    fptr = fopen(WRITEFILE, "a"); // open file in append mode
    if (fptr != 0)
    {
        fprintf(fptr, "\n", number); // print a new line
        for (int i = 0; i < textLength; i++) // print specific text (e.g. average or median)
        {
            fputc(text[i], fptr);
        }
        // write temperature to file
        fprintf(fptr, " temperature: %.2f degrees.", number);
    }
    else
    {
        printf("\nError opening the file!\n");
    } 
    fclose(fptr); // close file
}

void averageTemp(float array[])
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

void sortNumbers(float array[])
{
    float tempNum; // for swaps
    int minValue;  // to keep track of minimum value

    // the selection sort algorithm
    for (int i = 0; i < AMOUNTOFNUMS - 1; i++) // iterate through array n - 1 times
    {
        // index of leftmost element in unsorted part starts as minimum value
        minValue = i;
        // inner loop (j = i + 1 since we only need to go through the unsorted part)
        for (int j = i + 1; j < AMOUNTOFNUMS; j++)
        {
            if (array[j] < array[minValue]) // compare numbers in array
            {
                minValue = j; // change current minimum index if a smaller number is found
            }
        }
        // after each pass, check if minValue no longer is the leftmost element of unsorted part
        if (minValue != i)
        {
            // swap leftmost element in unsorted part with the smallest number found after each pass
            tempNum = array[i];
            array[i] = array[minValue];
            array[minValue] = tempNum;
        }
    }
   
    medianTemp(array); // call next function
}

void medianTemp(float array[])
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
