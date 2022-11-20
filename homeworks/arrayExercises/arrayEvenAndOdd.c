/********************************
* Filename: arrayEvenAndOdd.c
* 
* author: filbri
* created: 2019-10-19
* 
* notes: this program puts 1000 random numbers between 1-100
* in an array (1000 x 2). it then puts the even and odd numbers into 
* two different arrays and prints them.
* 
* ver: 2019-10-19 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

int main()
{
    time_t t;
    srand(time(&t)); // for generating different random numbers every time

    char randomNums[1000];
    char evenNums[1000];
    char oddNums[1000];
    char sortedNums[1000][2];
    int ctrEven = 0, ctrOdd = 0; // counter for the two arrays
    int evenNumsLen;
    int oddNumsLen;
    int ctrPrint;
    
    // creating an array with 1000 random numbers
    for (int i = 0; i < 1000; i++)
    {
        randomNums[i] = (rand() % 100) + 1;
    }

    // order the numbers into two arrays (one for even and one for odd numbers)
    for (int i = 0; i < 1000; i++)
    {
        if (randomNums[i] % 2 == 0) // if number is even
        {
            evenNums[ctrEven] = randomNums[i];
            ctrEven++;
        }
        else
        {
            oddNums[ctrOdd] = randomNums[i];
            ctrOdd++;
        }
    }

    // get length of both arrays
    evenNumsLen = strlen(evenNums);
    oddNumsLen = strlen(oddNums);
    
    // add all even numbers to the sorted array
    for (int i = 0; i < evenNumsLen; i++)
    {
        sortedNums[i][0] = evenNums[i];
    }

    // add all odd numbers to the sorted array
    for (int i = 0; i < oddNumsLen; i++)
    {
        sortedNums[i][1] = oddNums[i];
    }
    
    // find out the longest of the two arrays
    if (evenNumsLen >= oddNumsLen)
    {
        ctrPrint = evenNumsLen;
    }
    else
    {
        ctrPrint = oddNumsLen;
    }
    
    // print the sorted array
    printf("\nEven:\tOdd:\n");
    for(int i = 0; i <= ctrPrint; i++)
    {
        if (evenNumsLen > 0)
        {
            printf("%d", sortedNums[i][0]); // the even numbers column
            evenNumsLen--;
        }
        printf("\t");
        if (oddNumsLen > 0)
        {
            printf("%d", sortedNums[i][1]); // the odd numbers column
            oddNumsLen--;
        }
        printf("\n");
    }

return 0;
}