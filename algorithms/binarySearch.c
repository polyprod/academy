/********************************
* Filename: binarySearch.c
* 
* author: filbri
* created: 2019-10-18
* 
* notes: an example of the binary search algorithm
* 
* ver: 2019-10-18 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

#define NUMBEROFVALUES 10

int main()
{
    char numbers[] = {1, 3, 10, 15, 16, 18, 32, 77, 87, 99};
    int leftMost = 0;
    int rightMost = NUMBEROFVALUES - 1;
    int middle;
    int target;
    int flag = 0; // turns true if number was found 

    puts("Please enter a number: ");
    scanf(" %d", &target);

    // the binary search algorithm
    while (leftMost <= rightMost)
    {   
        middle = (leftMost + rightMost) / 2; // calculate middle index
        if (numbers[middle] > target)
        {
            rightMost = middle - 1; // decrease rightMost index
        }
        else if (numbers[middle] < target)
        {
            leftMost = middle + 1; // increase leftMost index
        }
        else
        {
            flag = 1;
            printf("Number %d was found in list at index %d!", target, middle);
            break; // to avoid infinite loop! 
        }
    }
    if (flag == 0)
    {
    // if number was not found, print this:
    printf("Number %d was unfortunately not found in the list.", target);
    }

return 0;
}