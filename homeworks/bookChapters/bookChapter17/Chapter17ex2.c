// Example program #2 from Chapter 17 of Absolute Beginner's Guide to
// C, 3rd Edition
// File Chapter17ex2.c

/* This program presents a menu of choices (three different decades),
gets the user's choice, and then presents a secondary menu (sports, 
entertainment, and politics). When the user makes her second choice,
it prints a list of key information from that specific decade in that
specific category. */

#include <stdio.h>
#include <stdlib.h> // Remember, if you plan to use exit(), you need
                    // this header file

int main()
{
    // Despite being a long program, you only need two variables:
    //one for the first menu and one for the second

    int choice1, choice2;

    // The potential decade choices

    printf("What do you want to see?\n");
    printf("1. The 1980's\n");
    printf("2. The 1990's\n");
    printf("3. The 2000's\n");
    printf("4. Quit\n");

    // The top-menu choice and the switch statement that makes the
    // resulting information appear are encased in a do-while loop
    // that ensures one of the 4 menu choices are made
    do
    {
        printf("Enter your choice: ");
        scanf(" %d", &choice1);
        switch (choice1)
        {
            // In the first case, the user picked the 1980's. Now it's
            // time to see what specific info they need.

            case (1):
                printf("\n\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. The movies\n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1)
                {
                    printf("1980: Philadelphia Phillies\n");
                    break;
                }
                else if (choice2 == 2)
                {
                    printf("1981: Chariots of Fire\n");
                    break;
                }
                else if (choice2 == 3)
                {
                    printf("1980: Jimmy Carter\n");
                    break;
                }
                else if (choice2 == 4)
                {
                    exit(1);
                }
                else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }

            // This case is for the 1990's
            // Unlike the top menu, there isn't a 
            // data-validation do-while loop

            case (2):
                printf("\n\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. The movies\n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1)
                {
                    printf("1992: Toronto Blue Jays\n");
                    break;
                }
                else if (choice2 == 2)
                {
                    printf("1991: The Silence of the Lambs\n");
                    break;
                }
                else if (choice2 == 3)
                {   
                    printf("1993-1999: Bill Clinton\n");
                    break;
                }
                else if (choice2 == 4)
                {
                    exit(1);
                }
                else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }

            // The section for when the user selects the 2000's
            case (3):
                printf("\n\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. The movies\n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1)
                {
                    printf("2000: New York Yankees\n");
                    break;
                }
                else if (choice2 == 2)
                {
                    printf("2005: Crash\n");
                    break;
                }
                else if (choice2 == 3)
                {
                    printf("2009: Barrack Obama\n");
                    break;
                }
                else if (choice2 == 4)
                {
                    exit(1);
                }
                else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }
            case (4):
                exit(1);    
            default:
                printf("\n%d is not a valid choice.\n", choice1);
                printf("Try again\n");
                break;
        }
    } while ((choice1 < 1) || (choice2 > 4));

    return 0;
}