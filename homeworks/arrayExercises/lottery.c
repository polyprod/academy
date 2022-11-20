/********************************
* Filename: lottery.c
* 
* author: filbri
* created: 2019-10-16
* 
* notes: this program creates a lottery ticket with 7 
* unique numbers between 1-35 
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

    int lotteryNums[7]; // array for the lottery ticket
    int listNr;
    int flag; // to check if the array contains 7 unique numbers

    do
    {
        // creating a lottery ticket
        for (int i = 0; i < 7; i++)
        {
        lotteryNums[i] = (rand() % 35) + 1;
        }

        flag = 1; // turns false in next step if array contains any duplicates!

        // check if any duplicates in array
        for (int i = 0; i < 7; i++)
        {
            for (int j = i + 1; j < 7; j++) // (j = i + 1) to avoid reset! e.g. (j = 1) would reset it each new iteration 
            {
                if (lotteryNums[i] == lotteryNums[j])
                {
                flag = 0;
                }
            }
        }
    } while (flag == 0); // new iteration if duplicates were found
    
    printf("Here is your lottery ticket!");
    for (int i = 0; i < 7; i++) 
    {
        printf("\n%d", lotteryNums[i]);
    }

    return 0;
}