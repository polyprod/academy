#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include "header.h" // import function declarations
#define ACCOUNT_FILE "datFiles/numbers.dat" // constant for storing file to open

void printNumbers(float array[], int arrayLength) // function definition
{
    FILE *outFile; // pointer to file to be opened
    outFile = fopen("datFiles/sortedNums.dat", "w"); // open file in write mode

    // write the sorted array to the file
    for (int i = 0; i < arrayLength; i++)
    {
        fprintf(outFile, "%.2f\n", array[i]);
    }
    
    fclose(outFile); // close file
}

void readNumbers() // function definition
{
    FILE *fptr; // file pointer definition
    float numbers[3]; // to hold the input from file
    int ctr = 0; // array counter

    fptr = fopen(ACCOUNT_FILE, "r"); // open file in read mode
    if (fptr != 0)
    {
        while (!feof(fptr)) // feof returns true when the last line been read
        {
            float tempNum;
            fscanf(fptr, "%f,", &tempNum);
            numbers[ctr] = tempNum; // store read number in array
            ctr++;
        }
    }
    else
    {
        printf("\nError opening the file!\n");
    }
    fclose(fptr); //close file
    sortNumbers(numbers, 3); // call next function
}

void sortNumbers(float array[], int arrayLength) // function definition
{
    float tempNum;  // for swaps
    int minValue; // to keep track of minimum value
    
    // the selection sort algorithm
    for (int i = 0; i < arrayLength - 1; i++) // iterate through array n - 1 times
    {
        // index of leftmost element in unsorted part starts as minimum value
        minValue = i;
        // inner loop (j = i + 1 since we only need to go through the unsorted part)
        for (int j = i + 1; j < arrayLength; j++)
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
    printNumbers(array, 3); // call final function
}
