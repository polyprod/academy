/********************************
* Filename: userName.c
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

void userName(char *pName); // function declaration

int main()
{
    char name[20]; // array to store user's first name
    userName(name);

    printf("%s", name);

return 0;
}

void userName(char *pName)
{
    char tempName[20]; 
    printf("\nPlease enter your first name: ");
    scanf("%s", tempName);

    int nameLength = sizeof(tempName) / sizeof(tempName[0]); // store length of the entered name

    // add name to the array the pointers points to
    for (int i = 0; i < nameLength; i++)
    {
        *pName = tempName[i];
        pName++;
    }
}
