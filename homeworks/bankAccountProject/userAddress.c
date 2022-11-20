/********************************
* Filename: userAddress.c
* 
* author: filbri
* created: 2019-10-22
* 
* notes: 
* 
* ver: 2019-10-22 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

void userAddress(char *pAddress); // function declaration

int main()
{
    char testArray[50]; // array to store user's first name
    userAddress(testArray);

    printf("%s", testArray);

return 0;
}

void userAddress(char *pAddress)
{
    char tempAddress[50]; 
    printf("\nPlease enter your home address: ");
    gets(tempAddress);

    int nameLength = sizeof(tempAddress) / sizeof(tempAddress[0]); // store length of the entered name

    // add name to the array the pointers points to
    for (int i = 0; i < nameLength; i++)
    {
        *pAddress = tempAddress[i];
        pAddress++;
    }
}
