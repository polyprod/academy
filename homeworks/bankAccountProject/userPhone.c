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

void userPhone(char *pPhone); // function declaration

int main()
{
    char testArray[50]; // array to store user's first name
    userPhone(testArray);

    printf("%s", testArray);

return 0;
}

void userPhone(char *pPhone)
{
    char tempPhone[50]; 
    printf("\nPlease enter your phone number: ");
    gets(tempPhone);

    int nameLength = sizeof(tempPhone) / sizeof(tempPhone[0]); // store length of the entered number

    // add name to the array the pointers points to
    for (int i = 0; i < nameLength; i++)
    {
        *pPhone = tempPhone[i];
        pPhone++;
    }
}
