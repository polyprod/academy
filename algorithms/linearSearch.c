/********************************
* Filename: linearSearch.c
* 
* author: filbri
* created: 2019-10-18
* 
* notes: an example of the linear search algorithm
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
    int target;
    int index;
    int flag = 0; // turns true if number was found


    puts("Please enter a number: ");
    scanf(" %d", &target);

    // the linear search algorithm
    for (int i = 0; i < NUMBEROFVALUES; i++)
    {
        if (numbers[i] == target)
        {
            index = i; // add correct index to variable
            printf("Number %d was found in list at index %d!", target, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
    
    // if number was not found, print this:
    printf("Number %d was unfortunately not found in the list.", target);
    }
    
return 0;
}