/*
 Filename: Week3ex6.c
  
 Author: filbri
 Created: 2019-09-30
  
 Notes: This program computes how long you have to work, when your
 initial salary is 1 cent per day (but then doubles every day) to
 make 1 000 000 dollars (1 000 000 dollars = 100 000 000 cents).
  
 Ver: 2019-09-30 first version
 */

#include <stdio.h>

int main()
{
    int days = 1;
    float salary = 1.0;
    
    printf("Day: 1, the salary is 1 cent.");

    while (salary < 100000000)
    {
        days++;
        salary *= 2;
        printf("\nDay: %d, the salary is: %.0f cents.", days, salary);
    }

    printf("\n\nTo make 1 000 000 dollars,");
    printf(" you have to work in %d days.", days);
    
return 0;  
}