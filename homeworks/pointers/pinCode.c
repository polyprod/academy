/********************************
* Filename: pinCode.c
* 
* author: filbri
* created: 2019-10-27
* 
* notes: this program shows how to pass a variable 
* by value between functions!
* 
* ver: 2019-10-27 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

void logInAttempts(int *pPinCode);

int main()
{
    int pincode;
    printf("Please enter pin: ");
    scanf("%d", &pincode);

    logInAttempts(&pincode);

    return 0;
}

void logInAttempts(int *pPinCode)
{
    printf("Entered code: %d", *pPinCode);
}
