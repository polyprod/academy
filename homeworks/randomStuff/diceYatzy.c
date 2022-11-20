/********************************
* Filename: diceYatzy.c
* 
* author: filbri
* created: 2019-10-15
* 
* notes: 
* 
* ver: 2019-10-15 first version
* ******************************/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int die, i, throws;
    int ones, twos, threes, fours, fives, sixes;
    int die1, die2, die3, die4, die5;
    char ans;
    time_t t;

    ones = twos = threes = fours = fives = sixes = 0;

    // This is needed to make sure each random number
    // generated is different

    srand(time(&t));

    printf("Please enter how many times you would like to throw the die: ");
    scanf(" %d", &throws);

    for (i = 1; i <= throws; i++)
    {
        die = (rand() % 6) + 1;
        if (die == 1)
        {
            ones++;
        }
        else if (die == 2)
        {
            twos++;
        }
        else if (die == 3)
        {
            threes++;
        }   
        else if (die == 4)
        {
            fours++;
        }
        else if (die == 5)
        {       
            fives++;
        }
        else
        {
            sixes++;
        }
    }

    printf("\nResults from the %d throws:\n", throws);
    printf("1: %d\n", ones);
    printf("2: %d\n", twos);
    printf("3: %d\n", threes);
    printf("4: %d\n", fours);
    printf("5: %d\n", fives);
    printf("6: %d\n", sixes);

    // Now the yatzy throws (5 dice per throw!, 3 times!)

    printf("Here follows the 1st Yatzy throw:");
    
        die1 = (rand() % 6) + 1;
        die2 = (rand() % 6) + 1;
        die3 = (rand() % 6) + 1;
        die4 = (rand() % 6) + 1;
        die5 = (rand() % 6) + 1;

        printf("\n1st: %d", die1);
        printf("\n2nd: %d", die2);
        printf("\n3rd: %d", die3);
        printf("\n4th: %d", die4);
        printf("\n5th: %d", die5);

        // Ask the user about which dice to keep!

        printf("\nDo you want to keep die 1? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die1 = 0;
        }
        printf("\nDo you want to keep die 2? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die2 = 0;
        }
        printf("\nDo you want to keep die 3? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die3 = 0;
        }
        printf("\nDo you want to keep die 4? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die4 = 0;
        }
        printf("\nDo you want to keep die 5? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die5 = 0;
        }

        // The second dice throw!
        printf("\nHere follows the 2nd Yatzy throw:");
        if (die1 == 0)
        {
            die1 = (rand() % 6) + 1;
            printf("\n1st: %d", die1);
        }
        else
        {
            printf("\n1st: %d", die1);
        }
        if (die2 == 0)
        {
            die2 = (rand() % 6) + 1;
            printf("\n2nd: %d", die2);
        }
        else
        {
            printf("\n2nd: %d", die2);
        }
        if (die3 == 0)
        {
            die3 = (rand() % 6) + 1;
            printf("\n3rd: %d", die3);
        }
        else
        {
            printf("\n3rd: %d", die3);
        }
        if (die4 == 0)
        {
            die4 = (rand() % 6) + 1;
            printf("\n4th: %d", die4);
        }
        else
        {
            printf("\n4th: %d", die4);
        }
        if (die5 == 0)
        {
            die5 = (rand() % 6) + 1;
            printf("\n5th: %d", die5);
        }
        else
        {
            printf("\n5th: %d", die5);
        }

        // Ask the user a SECOND time about which dice to keep!

        printf("\nDo you want to keep die 1? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die1 = 0;
        }
        printf("\nDo you want to keep die 2? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die2 = 0;
        }
        printf("\nDo you want to keep die 3? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die3 = 0;
        }
        printf("\nDo you want to keep die 4? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die4 = 0;
        }
        printf("\nDo you want to keep die 5? (Y/N): ");
        scanf(" %c", &ans);
        if ((toupper(ans)) == 'N')
        {
            die5 = 0;
        }

        // The third dice throw!
        printf("\nHere is the result of the three Yatzy throws!");
        if (die1 == 0)
        {
            die1 = (rand() % 6) + 1;
            printf("\n1st: %d", die1);
        }
        else
        {
            printf("\n1st: %d", die1);
        }
        if (die2 == 0)
        {
            die2 = (rand() % 6) + 1;
            printf("\n2nd: %d", die2);
        }
        else
        {
            printf("\n2nd: %d", die2);
        }
        if (die3 == 0)
        {
            die3 = (rand() % 6) + 1;
            printf("\n3rd: %d", die3);
        }
        else
        {
            printf("\n3rd: %d", die3);
        }
        if (die4 == 0)
        {
            die4 = (rand() % 6) + 1;
            printf("\n4th: %d", die4);
        }
        else
        {
            printf("\n4th: %d", die4);
        }
        if (die5 == 0)
        {
            die5 = (rand() % 6) + 1;
            printf("\n5th: %d", die5);
        }
        else
        {
            printf("\n5th: %d", die5);
        }
        
return 0;
}