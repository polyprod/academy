/*
 Filename: Week3ex9.c
  
 Author: filbri
 Created: 2019-10-01
  
 Notes: This program asks the user to input a number, and then creates 
 a pyramid with the same amount of stars at the bottom as the number
 the user entered.
  
 Ver: 2019-10-01 first version
 */

#include <stdio.h>

int main()
{
    int amountOfRows, space, i, rowsLeft;

    printf("Please enter a number between 1-20: ");
    scanf(" %d", &amountOfRows); 

    rowsLeft = amountOfRows;

     // Using an outer for loop to print the correct number of rows
    for (i = 1; i <= amountOfRows; i++)
    {
        // Using a inner for loop to print the spaces
        for (space = i; space <= amountOfRows; space++) 
        {
            printf(" ");
        }

        // Using a while loop to print the "stars"
        while (rowsLeft <= amountOfRows)
        {
            printf("* ");
            rowsLeft++;
        }
        
        // Print a newline when each inner loop finishes
        printf("\n");  
        rowsLeft = amountOfRows - i;
    }

return 0;
}