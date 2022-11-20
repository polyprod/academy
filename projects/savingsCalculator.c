/*
 Filename: savingsCalculator.c
  
 Author: filbri
 Created: 2019-10-07
  
 Notes: This program calculates how much money you can make by saving a certain amount per month. 
 The program asks the user how many years she will save, how much the start amount is, and how
 many Swedish crowns she will be saving per month (the program adds the average annual return 
 (1999-2018: 8.46 %) for the Stockholm Stock Exchange. 
  
 Ver: 2019-10-07 first version
 */

#include <stdio.h>

int main()
{
    
    int i, startAmount, years, saveMonth, totalAmount, noReturn;

    printf("Hello and welcome to this savings calculator!\n");
    printf("Please enter how much money (Swedish crowns)");
    printf(" you have (to start your savings with): ");
    scanf(" %d", &startAmount);

    printf("\nThank you! Now please enter for how many years");
    printf(" you plan to save: ");
    scanf(" %d", &years);

    printf("\nAnd finally, please enter how much money you will");
    printf(" save per month: ");
    scanf(" %d", &saveMonth);

    // Calculating how much money after 1 year 
    // (including the start amount)
    totalAmount = (12 * saveMonth) + startAmount;
    totalAmount *= 1.0846; // Adding the annual return
    printf("After year 1: %d kr.", totalAmount);

    // Calculation for the rest of the years the user entered
    for (i = 2; i <= years; i++)
    {
        totalAmount += (12 * saveMonth);
        totalAmount *= 1.0846;
        printf("\nAfter year %d: %d kr.", i, totalAmount);
    }

    // Calculation without the annual return
    noReturn = startAmount + ((12 * saveMonth) * years);

    printf("\n\nIf you start with %d kr, and save %d kr per month", startAmount, saveMonth);
    printf(" in %d years, you will have %d kr.\n", years, totalAmount);
    printf("\nBut hey! Without the annual return, it would just be");
    printf(" %d kr!", noReturn);
    
return 0;
}