/********************************
* Filename: charToInt.c
* 
* author: filbri
* created: 2019-10-31
* 
* notes: 
* 
* ver: 2019-10-31 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arraySize = 4; // length of input number
    char digits[4] = {"0123"}; // number
    int number[4]; // array for storing number as integer

    for (int i = 0; i < arraySize; i++) // store each character in integer array
    {
        number[i] = digits[i] - '0';
    }
    for (int i = 0; i < arraySize; i++) // print each digit of array  
    {
        printf("%d", number[i]);
    }

    return 0;
}