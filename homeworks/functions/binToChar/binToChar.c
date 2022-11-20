/********************************
* Filename: binToChar.c
* 
* author: filbri
* created: 2019-10-28
* 
* notes: 
* 
* ver: 2019-10-28 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

int binToChar(int *binArr, char *character);

int main()
{
    char character[1];
    int binaryNumber[8] = {0, 1, 1, 1, 1, 0, 1, 0};

    if (binToChar(binaryNumber, character) == 0)
    {
        printf("\nError!");
    }
    else
    {
        printf("\nCharacter: %s", character);
        printf("\nThe conversion went well!");
    }
    
    return 0;
}

int binToChar(int *binArr, char *character)
{
    int decimalValue = 0;
    int j = 0;
    int tempValue;

    // convert to a decimal value
    for (int i = 7; i >= 0; i--)
    {
        tempValue = binArr[i];
        decimalValue += pow(2, j) * binArr[i];
        j++; 
    }
    printf("\nDecimal value: %d", decimalValue);
    sprintf(character, "%c", decimalValue); // convert to a character
    return 1;
}
