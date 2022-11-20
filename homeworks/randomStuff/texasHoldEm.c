/********************************
* Filename: texasHoldEm.c
* 
* author: filbri
* created: 2019-10-24
* 
* notes: 
* 
* ver: 2019-10-24 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>



// describes a playing card
struct card
{
    int value;
    char suit;
};

// a collection of cards: a whole deck or the players card 
struct cardCollection
{
    struct card collection[52];
    int sorted;
};

// return the value of most valuable combination found in the collection
int valueOfCollection(struct cardCollection theCollection)
{
    return theCollection.collection[0].value;
}

struct cardCollection openNewDeck()
{
    struct cardCollection myDeckToFill;
    for (int i = 1; i < 14; i++)
    {
        myDeckToFill.collection[i - 1].value = i;
        myDeckToFill.collection[i - 1].suit = 'c';
    }
    for (int i = 14; i < 27; i++)
    {
        myDeckToFill.collection[i - 1].value = i;
        myDeckToFill.collection[i - 1].suit = 'd';
    }
    for (int i = 27; i < 40; i++)
    {
        myDeckToFill.collection[i - 1].value = i;
        myDeckToFill.collection[i - 1].suit = 's';
    }
    for (int i = 40; i < 53; i++)
    {
        myDeckToFill.collection[i - 1].value = i;
        myDeckToFill.collection[i - 1].suit = 'h';
    }
    return myDeckToFill;
}

void printDeck(struct cardCollection deckToPrint)
{
    for (int i = 0; i < 52; i++)
    {
        printf("%d %c \n", deckToPrint.collection[i]. value, deckToPrint.collection[i].suit);
    }
}

int isPair(struct cardCollection cardsToCheck)
{
    for (int i = 0; i < sizeof(cardsToCheck.collection)/sizeof(cardsToCheck.collection[0]); i++)
    {
        // this code searches for pairs in my cardCollection
    }

    return 1; // if pair is found!
}

int main()
{
    struct cardCollection myDeckOfCards;
    myDeckOfCards = openNewDeck();
    printDeck(myDeckOfCards);
    return 0;
}

   