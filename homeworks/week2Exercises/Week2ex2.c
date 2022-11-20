/*
 Filename: Week2ex2.c
  
 Author: filbri
 Created: 2019-09-26
  
 Notes: This program calculates both the sum and difference of/between two integers. 
  
 Ver: 2019-09-26 first version
 */

#include <stdio.h>

int main()
{
    int score1 = 365; // Initializing score 1
    int score2 = 256; // Initializing score 2

    int sum = score1 + score2; // Calculating the sum
    int diff = score1 - score2; // Calculating the difference 

    printf("The sum of the two integers is %d.\n", sum);
    printf("The difference between the two integers is %d.\n", diff);

    return 0;
}