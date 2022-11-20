/********************************
* Filename: readStrings.c
* 
* author: filbri
* created: 2019-10-26
* 
* notes: this program reads several lines of strings from a file
* and prints them to the screen.
* 
* ver: 2019-10-26 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

FILE *fptr; // file pointer definition

int main()
{
    char fileText[100]; // will hold each line of input
    fptr = fopen("strings.txt", "r"); // open file in read mode

    if (fptr != 0)
    {
        while (!feof(fptr)) // feof returns true when the last line been read
        {
            fgets(fileText, 100, fptr);
            printf("%s", fileText);
        }
    }
    else
    {
        printf("\nError opening the file!\n");
    }
    fclose(fptr);

    return 0;
}