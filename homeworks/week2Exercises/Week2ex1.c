/*
 Filename: Week2ex1.c
  
 Author: filbri
 Created: 2019-09-26
  
 Notes: This program calculates both the sum and difference of/between two integers. 
  
 Ver: 2019-09-26 first version
 */

#include <stdio.h>

int main()
{
    int score1, score2, sum, diff;

    printf("Type an integer: ");
    scanf(" %d", &score1);

    printf("Again, type an integer: ");
    scanf(" %d", &score2);

    sum = score1 + score2;
    diff = score1 - score2;

    printf("The sum of the two integers is %d.\n", sum);
    printf("The difference between the two integers is %d.\n", diff);

    return 0;
}