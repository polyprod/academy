#include "converterFunctions.h" // import function declarations

float fahrenheitToCelsius(float fahrenheit) // function definition
{
    float result;

    result = (fahrenheit - 32) / 1.8;

    return result;
}

float celsiusToFahrenheit(float celsius)
{
    float result;

    result = ((celsius * 9) / 5) + 32;

    return result;
}