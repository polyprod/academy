/********************************
* Filename: randomNums.c
* 
* author: filbri
* created: 2019-10-16
* 
* notes: This program creates an array with 100 random numbers between
* 1-100. The user then enters a number between 1-100 and the program
* prints whether the number is in the list or not.
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
    int userNumber;
    int nrNotInTheList = 0;

    printf("Enter a number: ");
    scanf(" %d", &userNumber);
    
    // make a list with 100 random numbers
    for (int i = 0; i < 100; i++)
    {
        randomNumbers[i] = (rand() % 100) + 1;
    }
    
    // check if userNumber is in the list!
    for (int i = 0; i < 100; i++)
    {
        if (userNumber == randomNumbers[i])
        {
        printf("%d is in the list.", userNumber); 
        nrNotInTheList = 1;
        break;
        }
    }
    if (nrNotInTheList == 0 )
    {
       printf("%d is not in the list.", userNumber);
    }

    return 0;
}