/********************************
* Filename: checkpointV1.c
* 
* author: filbri
* created: 2019-10-18
* 
* notes: this program asks the user to enter a registration number.
* the program then prints if it is in correct standard.
* 
* ver: 2019-10-18 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int lengthNum;
    char regNum[6];
    char ctrlLetters[3];
    int checkValue = 0;

    while (checkValue == 0)
    {
        checkValue = 1;
        printf("\nPlease enter a registration number: ");
        scanf(" %s", regNum);

        // check the length of regNum 
        lengthNum = strlen(regNum);
        if (lengthNum != 6)
        {
            printf("\nSorry, but the registration number is not in the correct length!");
            printf("\nIt should be 6 elements!");
            checkValue = 0;
            continue;
        }

        // check if subscripts 1-3 are letters
        for (int i = 0; i < 3; i++)
        {
            if (isalpha(regNum[i]) == 0)
            {
                printf("\nSorry, but the first 3 elements should be letters!");
                checkValue = 0;
                continue;
            }
        }

        // check if subscripts 1-3 are permitted letters 
        for (int i = 0; i < 3; i++)
        {
            ctrlLetters[i] = regNum[i];
        }

        for (int i = 0; i < 3; i++) 
        {
            if (toupper(ctrlLetters[i]) == 'Q')
            {
                printf("\nSorry, but %c is not a permitted letter!", toupper(ctrlLetters[i]));
                checkValue = 0;
                continue;
            }
            else if (toupper(ctrlLetters[i]) == 'V')
            {
                printf("\nSorry, but %c is not a permitted letter!", toupper(ctrlLetters[i]));
                checkValue = 0;
                continue;
            }
            else if (toupper(ctrlLetters[i]) == 'I')
            {
                printf("\nSorry, but %c is not a permitted letter!", toupper(ctrlLetters[i]));
                checkValue = 0;
                continue;
            }
        }
        
        // check if subscripts 4-5 are digits
        for (int i = 3; i < 5; i++)
        {
            if (isdigit(regNum[i]) == 0)
            {
                printf("\nSorry, but elements 4 and 5 should be digits!");
                checkValue = 0;
                continue;
            }
        }

        // check if subscript 6 is a letter/digit AND permitted letter
        if (isdigit(regNum[5]))
        {
        }
        else if (isalpha(regNum[5]))
        {
        }
        else
        {
            printf("\nSorry, but the last element is neither a letter or digit!");
            checkValue = 0;
            continue;
        }

        if (toupper(regNum[5]) == 'Q')
        {
            printf("\nSorry, but %c is not a permitted letter!", toupper(regNum[5]));
            checkValue = 0;
            continue;
        }
        else if (toupper(regNum[5]) == 'V')
        {
            printf("\nSorry, but %c is not a permitted letter!", toupper(regNum[5]));
            checkValue = 0;
            continue;
        }
        else if (toupper(regNum[5]) == 'I')
        {
            printf("\nSorry, but %c is not a permitted letter!", toupper(regNum[5]));
            checkValue = 0;
            continue;
        }
        if (checkValue != 0)
        {
            break;
        }
    }
    
    // print the registration number if it is correct
    printf("Registration number %s is correct.", regNum);

return 0;
}