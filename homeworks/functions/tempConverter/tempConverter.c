/********************************
* Filename: tempConverter.c
* 
* author: filbri
* created: 2019-10-24
* 
* notes: this program helps the user convert between different
* temperatures. 
* 
* ver: 2019-10-24 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#include "converterFunctions.h" // import functions

int main()
{
    int userSelection;
    float temp;

    // prompt user
    printf("Please select between which temperature scales you'd like to convert: ");
    printf("\n[1] Celsius to Fahrenheit");
    printf("\n[2] Fahrenheit to Celsius\n");
    scanf(" %d", &userSelection);

    // prompt user about a temperature value
    printf("\nPlease enter what temperature you'd like to convert: ");
    scanf(" %f", &temp);

    if (userSelection == 1)
    {
        celsiusToFahrenheit(temp);
        printf("%.1lf Celsius is equal to %.1lf Fahrenheit!\n", temp, celsiusToFahrenheit(temp));
    }
    else if (userSelection == 2)
    {
        fahrenheitToCelsius(temp);
        printf("%.1lf Fahrenheit is equal to %.1lf Celsius!\n", temp, fahrenheitToCelsius(temp));
    }

    return 0;
}