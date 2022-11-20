/*
 Filename: Week3ex7.c
  
 Author: filbri
 Created: 2019-10-01
  
 Notes: This program prints the 10 first numbers in 
 the Fibonacci Sequence.
  
 Ver: 2019-10-01 first version
 */

#include <stdio.h>

int main()
{
    // Declaring/initializing integers
    int amountOfNumbers, i, num1 = 0, num2 = 1, nextDigit;

    // Asking the user how many numbers in the
    // Fibonacci Sequence she wants to see
    printf("How many numbers in the Fibonacci");
    printf(" Sequence do you want to see? ");
    scanf(" %d", &amountOfNumbers);

    // Printing the numbers, using an equation
    printf("Fibonacci Series: ");

    for (i = 1; i <= amountOfNumbers; i++)
    {
        printf("\n%d", num1);
        nextDigit = num1 + num2;
        num1 = num2;
        num2 = nextDigit; 
    }

    return 0;
}