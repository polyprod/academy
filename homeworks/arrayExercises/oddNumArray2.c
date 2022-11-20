/********************************
* Filename: oddNumArray.c
* 
* author: filbri
* created: 2019-10-16
* 
* notes: this program creates an array with 100 random numbers.
* it then prints all numbers at the odd subscripts in the array. 
* 
* ver: 2019-10-16 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
    time_t t;
    srand(time(&t)); // for generating different random numbers every time

    int randomNumbers[100];
    
    printf("Printing all odd subscripts in the list...");
    
    // create a list with 100 random numbers
    for (int i = 0; i < 100; i++)
    {
        randomNumbers[i] = (rand() % 100) + 1;
    }

    // print the numbers at the odd subscripts
    printf("\nNumbers stored in an odd subscript:\n");
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 1)
        {
        printf("\n%d", randomNumbers[i]); 
        }
    }

    return 0;
}