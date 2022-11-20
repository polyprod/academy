/*
 Filename: Week3ex4.c
  
 Author: filbri
 Created: 2019-09-30
  
 Notes: This program computes the user's BMI. The user inputs length
 and weight.
  
 Ver: 2019-09-30 first version
 */

#include <stdio.h>

int main()
{
    // Initializing floats
    float userLength, userWeight, userBMI; 
    
    // Asking the user about information
    printf("Please type your length in m: ");
    scanf(" %f", &userLength);

    printf("\nThank you! Now please enter your weight in kg: ");
    scanf(" %f", &userWeight); 

    // Calculating the user's BMI
    userBMI = userWeight / (userLength * userLength);
    printf("\nYour BMI is %.1f.", userBMI);

    // Printing if the user is a walkingstick, human or an elephant
    if (userBMI <= 17)
    {
        printf("\nYou are a walkingstick!");
    }
    else if (userBMI > 17 && userBMI < 25)
    {
        printf("\nYou are a human!");
    }
    else
    {
        printf("\nYou are an elephant!");
    }
    
return 0;
}