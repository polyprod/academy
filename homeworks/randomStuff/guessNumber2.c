/********************************
* Filename: guessNumber.c
* 
* author: filbri
* created: 2019-10-15
* 
* notes: 
* 
* ver: 2019-10-15 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
    time_t t;

    srand(time(&t)); 

    int computerNumber = 0;
    char userNumber[15];
    int guesses = 1;
    int outOfRange = 0;
    int intUserNumber;

    computerNumber = (rand() % 100) + 1; // Computer generates a number
    printf("%d", computerNumber);

    while(intUserNumber != computerNumber)
    {
        printf("\nGuess the number: ");
        scanf(" %c", &userNumber);
        if (isalpha(userNumber))
        {
            printf("\nPlease do not enter any letters!");
            printf("\nPlease try again!");
            continue;
        }
        else
        {
            intUserNumber = atoi(userNumber); // Convert the char to an int
        }
        
        if (intUserNumber == computerNumber)
        {
            if (guesses <= 3)
            {
                printf("\nYes! %d is the correct number!", computerNumber);
                printf("\nIt took you %d guesses to pick the correct number!", guesses);
                printf("\nGo buy a lottery ticket!");
                break;
            }
            else if (guesses > 3 && guesses <= 6)
            {
                printf("\nYes! %d is the correct number!", computerNumber);
                printf("\nIt took you %d guesses to pick the correct number!", guesses);
                printf("\nHey, you're pretty average!");
                break;
            }
            else
            {
                printf("\nYes! %d is the correct number!", computerNumber);
                printf("\nIt took you %d guesses to pick the correct number!", guesses);
                printf("\nYou should go and practice binary search!");
                break;
            }
        }
         else if (intUserNumber < 1 || intUserNumber > 100)
        {
            printf("That is not a number between 1-100!");
            outOfRange++;
        }
        else if (intUserNumber > computerNumber)
        {
            printf("Too high! Please guess again...");
            guesses++;
        }
        else if (intUserNumber < computerNumber)
        {
            printf("Too low! Please guess again...");
            guesses++;
        }
        // New if statement
        if (outOfRange >= 2)
        {
            printf("\nYou've guessed twice out of range!");
            printf(" We're sorry but you SUCK!");
            printf("\nAnd that's too bad! You're out!");
            break;
        }
        // Another if statement
        if (guesses > 9)
        {
            printf("\nYou've guessed %d times!!", guesses);
            printf("\nAnd that's too bad! You're out!");
            break;
        }
    } 

    
return 0;
}