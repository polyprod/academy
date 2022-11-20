/********************************
* Filename: numbers.c
* 
* author: filbri
* created: 2019-10-29
* 
* notes: this function reads numbers from a file. NEED UPDATE! CAN'T TAKE IF NUMBER START WITH ZERO!!
* 
* ver: 2019-10-29 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>

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