/*
 Filename: Week3ex5.c
  
 Author: filbri
 Created: 2019-09-30
  
 Notes: This program asks for the user's social security number and
 then decides whether the user is a boy or a girl.
  
 Ver: 2019-09-30 first version
 */

#include <stdio.h>

int main()
{
    // Declaring long long ints
    long long int securityNumber, lastDigitgone, oddOrEven;

    printf("Please enter your social security number with 10 digits: ");
    scanf(" %lld", &securityNumber);

    // Division by 10 to get rid of the last digit
    lastDigitgone = securityNumber / 10;

    // Checking if the second last digit in the social security number
    // is odd or even

    oddOrEven = lastDigitgone % 2;
    
    if (oddOrEven == 1)
    {
        printf("You were born as a boy!");
    }
    else
    {
        printf("You were born as a girl!");
    }
    
    return 0;
}