/********************************
* Filename: readNumbers.c
* 
* author: filbri
* created: 2019-10-29
* 
* notes: this function reads numbers from a file. 
* 
* ver: 2019-10-29 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_LENGTH 9 // specify the storage for one number

int main()
{
//void readNumbers(int amountOfNumbers)
//{
    char tempNum[NUM_LENGTH];      // temporary storage of read number
    char numbers[1271][9]; // array for the numbers
   
    FILE *fptr;                    // file pointer definition

    fptr = fopen("binary.dat", "r"); // open file in read mode
    if (fptr != 0)
    {
        
        for (int i = 0; i < 1271; i++)
        {
            fscanf(fptr, "%s ", tempNum);
            strcpy(numbers[i], tempNum); // store read number in array
        }
    }
    else
    {
        printf("\nError opening the file!\n");
    }

    for (int i = 0; i < 1271; i++)
    {
        printf("%s ", *(numbers + i));
    }
    fclose(fptr); // close file
//}
}