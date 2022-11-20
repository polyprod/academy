/********************************
* Filename: yatzy.c
* 
* author: filbri
* created: 2019-10-19
* 
* notes: this program simulates a Yatzy round of 3 throws.
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

    int yatzyNums[1][5];
    char userAns;
    int ctrDice;
    int tries = 2;
    int newThrow; // turns true if user wants to discard a die

    // store 5 random numbers between 1-6 in the yatzyNums array
    for (int i = 0; i < 5; i++)
    {
        yatzyNums[0][i] = (rand() % 6) + 1;
    }

    puts("Welcome to this round of Yatzy!");

    do
    {
        ctrDice = 1;
        printf("\nThis is your current numbers (%d throw(s) left):\n", tries);
        tries--;

        // print the yatzyNums array
        printf("Die 1\tDie 2\tDie 3\tDie 4\tDie 5\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d\t", yatzyNums[0][i]);
        }

        newThrow = 0; // set this to false for each iteration of the while loop

        // ask the user about which dice to keep
        for (int i = 0; i < 5; i++)
        {
            printf("\nDo you want to keep die %d? (Y/N): ", ctrDice);
            scanf(" %c", &userAns);
            ctrDice++;
            if ((toupper(userAns)) == 'N') // if answer is no, set newThrow to true 
            {                               
                newThrow = 1;
                yatzyNums[0][i] = (rand() % 6) + 1; // store a new value in the array
            }
        }
        if (newThrow == 0) // none no-answers, break out of while loop
        {
            break;
        }
    } while (tries > 0);

    // print the end result
    printf("\nHere is the result of your Yatzy round!\n");
    printf("Die 1\tDie 2\tDie 3\tDie 4\tDie 5\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", yatzyNums[0][i]);
    }

return 0;
}