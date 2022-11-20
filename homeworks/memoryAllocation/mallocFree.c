/********************************
* Filename: mallocFree.c
* 
* author: filbri
* created: 2019-10-23
* 
* notes: this program shows how you can use the functions malloc()
* and free(). the program looks for a number of random integers,
* allocates an array and fills it with numbers between 1 and 500
* and then loops through all the numbers and figures out the 
* smallest, the biggest, and the average. It then frees the 
* memory.
* 
* ver: 2019-10-23 first version
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
    int amountOfNums; 
    int *randomNums;
    double total = 0;
    int biggest, smallest;
    float average;

    time_t t; // to generate new random numbers every time
    srand(time(&t));

    printf("How many random numbers do you want in your array? ");
    scanf(" %d", &amountOfNums);

    /* allocate an array of integers equal to the number of 
    elements requested by the user */
    randomNums = (int *) malloc(amountOfNums * sizeof(int));

    // test to ensure that the array allocated properly
    if (!randomNums)
    {
        printf("Random array allocation failed!\n");
        exit(1);
    }

    // loops through the array and assigns a random
    // number between 1 and 500 to each element
    for (int i = 0; i < amountOfNums; i++)
    {
        randomNums[i] = (rand() % 500) + 1;
    }

    // initialize the biggest and smallest number
    // for comparison's sake
    biggest = 0;
    smallest = 500;

    // loop through the now-filled array testing for
    // the random numbers that are biggest, smallest,
    // and adding all numbers together to calculate
    // an average
    for (int i = 0; i < amountOfNums; i++)
    {
        total += randomNums[i];
        if (randomNums[i] > biggest)
        {
            biggest = randomNums[i];
        }
        if (randomNums[i] < smallest)
        {
            smallest = randomNums[i];
        }
    }
    
    average = ((float)total) / ((float)amountOfNums);
    printf("The biggest random number is %d.\n", biggest);
    printf("The smallest random number is %d.\n", smallest);
    printf("The average of the random numbers is %.2f.\n", average);

    // when you use malloc, remember to also use free!
    free(randomNums);

return 0;
}