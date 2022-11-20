/********************************
* Filename: palindrome.c
* 
* author: filbri
* created: 2019-10-16
* 
* notes: this program prints whether a string is a palindrome or not
* 
* ver: 2019-10-16 first version
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
    int arrayLen;
    int flag = 1; // sets to false if userInput is not a palindrome
    char userInput[100];
    char userBackwards[100];

    puts("Please enter e.g. a word, the name of a city, etcetera: ");
    gets(userInput); // with gets, the user is able to enter spaces 

    // add length of userInput to variable
    arrayLen = strlen(userInput);

    // add userInput backwards to new array
    for (int i = 0; i < arrayLen + 1; i++) // arrayLen + 1 so you add the null zero! or you will miss it  
    {
        userBackwards[i] = userInput[(arrayLen - 1) - i];
    }

    // check if userInput is palindrome
    for (int i = 0; i < arrayLen; i++)
    {
        if (userInput[i] != userBackwards[i])
        {
            printf("\n%s is not a palindrome.", userInput);
            printf("\nBecause it is %s backwards.", userBackwards);
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\n%s is a palindrome!!", userInput);
    }
       
return 0;
}