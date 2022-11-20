/********************************
* Filename: arrayToFunction.c
* 
* author: filbri
* created: 2019-10-25
* 
* notes: this program passes an array to a function.
* the function then changes the content in the array.
* 
* ver: 2019-10-25 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

void changeName(char *name[], int arrarySize); // function declaration

int main()
{
    char *name[2] = {"01111111", "00111111"};
    for (int i = 0; i < 2; i++)
    {
        printf("\n%s", name[i]);
    }
    
    changeName(name, sizeof(name) / sizeof(name[0]));

    return 0;
}

void changeName(char *name[], int arrarySize) // function definition
{
    // change the strings
    name[0] = "00111111";
    name[1] = "01111111";

    // print the new strings
    for (int i = 0; i < arrarySize; i++)
    {
        printf("\n%s", name[i]);
    }
}