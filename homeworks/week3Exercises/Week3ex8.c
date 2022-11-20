/*
 Filename: Week3ex8.c
  
 Author: filbri
 Created: 2019-10-01
  
 Notes: This program asks the user to input
 a number, and then the program prints 
 digits in the amount of rows the user entered.
  
 Ver: 2019-10-01 first version
 */

#include <stdio.h>

int main()
{
    // Declaring/initializing integers
    int amountOfRows, outer, numbers = 1, currentRow = 1, currentNum = 1;

    // Asking the user to enter a number
    printf("Please enter a number between 1-20: ");
    scanf(" %d", &amountOfRows);

    // Using an outer loop to print the correct number of rows
    for (outer = 1; outer <= amountOfRows; outer++, numbers = 1)
    {
        // Using a inner loop to print each new row
        for (currentNum; numbers <= currentRow; currentNum++)
        {
            printf("%d ", currentNum);
            numbers++;
        }
        
        // Print a newline when each inner loop finishes
        printf("\n");
        currentRow++;
    }
    
return 0;
}