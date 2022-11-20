/*
 Filename: Week3ex1.c
  
 Author: filbri
 Created: 2019-09-30
  
 Notes: This program computes the fuel cost for a road trip. 
 The user inputs driving distance, litres/km and petrol/diesel/
 electric.
 The fuel prices are initialized in the header file "Week3ex1.h". 
  
 Ver: 2019-09-30 first version
 */

#include <stdio.h>
#include "Week3ex1.h"

int main()
{
    // Initializing floats 
    float driveDistance, litresKm, totalCost, totalLitres;

    // Initializing int option for petrol/diesel/electric
    int fuelType;

    // Asking user about driving distance, fuel type and maybe litres/km
    printf("How many km do you plan to drive? ");
    scanf(" %f", &driveDistance);

    printf("\nWhat type of fuel does your car use?");
    printf("\nPlease type 1 for petrol, 2 for diesel");
    printf(" or 3 for electric: ");
    scanf(" %d", &fuelType);
    
    // Calculating the total fuel cost for a petrol driven car
    if (fuelType == 1)
    {
        printf("\nHow many litres per km does your car use? ");
        scanf(" %f", &litresKm);
        totalLitres = driveDistance * litresKm;
        totalCost = PETROL * totalLitres;
        printf("\nThe total cost for the road trip is %.1f kr.", totalCost); 
    }
    // Calculating the total fuel cost for a diesel driven car 
    else if (fuelType == 2)
    {
        printf("\nHow many litres per km does your car use? ");
        scanf(" %f", &litresKm);
        totalLitres = driveDistance * litresKm;
        totalCost = DIESEL * totalLitres;
        printf("\nThe total cost for the road trip is %.1f kr.", totalCost); 
    }
    // Calculating the total cost for an electric car
    else
    {
        totalCost = ELECTRIC * driveDistance;
        printf("\nThe total cost for the road trip is %.1f kr.", totalCost); 
    }
    
return 0;
}
