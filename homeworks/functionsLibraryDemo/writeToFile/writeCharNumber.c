/********************************
* Filename: writeCharNumber.c
* 
* author: filbri
* created: 2019-10-29
* 
* notes: this function writes a char and number to a file.
* 
* ver: 2019-10-29 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>

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
        // write to file
        fprintf(fptr, " temperature: %.2f degrees.", number);
    }
    else
    {
        printf("\nError opening the file!\n");
    } 
    fclose(fptr); // close file
}