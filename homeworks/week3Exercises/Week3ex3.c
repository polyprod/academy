/*
 Filename: Week3ex3.c
  
 Author: filbri
 Created: 2019-09-30
  
 Notes: This program computes whether it is more affordable to buy
 an annual or daily ticket at the gym. The user inputs the price for
 an annual ticket, the price for a daily ticket and how many times
 the user plans to visit the gym during a year. 
  
 Ver: 2019-09-30 first version
 */

#include <stdio.h>

int main()
{
    // Initializing ints
    int annualTicket, dailyTicket, dailyCost, visitsGym;

    // Asks the user about information 
    printf("How much does an annual ticket to the gym cost (kr)? ");
    scanf(" %d", &annualTicket);

    printf("\nHow much does a daily ticket to the gym cost (kr)? ");
    scanf(" %d", &dailyTicket);

    printf("\nHow many times do you plan to visit the gym this year? ");
    scanf(" %d", &visitsGym);

    // Calculating the dailyTicket option
    dailyCost = dailyTicket * visitsGym;

    // Deciding the most affordable option
    if (annualTicket < dailyCost)
    {
        printf("\nFor you, it is more affordable to buy an annual ticket.");
        printf("\nFor daily tickets it will be %d kr.", dailyCost);
    }
    else
    {
        printf("\nFor you, it is more affordable to buy daily tickets.");
        printf("\nThe price is %d kr.", dailyCost);
    }

return 0;
}



