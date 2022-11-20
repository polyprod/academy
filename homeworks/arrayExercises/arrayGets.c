/********************************
* Filename: arrayGets.c
* 
* author: filbri
* created: 2019-10-16
* 
* notes: this program asks the user to enter the name of a city. 
* the program then prints each character in a column. 
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
    int cityLen;
    char city[50];
    puts("Please enter the name of a city: ");
    gets(city); // the user is able to enter spaces with gets


    // add length of city to variable
    cityLen = strlen(city);

    // print the name of the city in a column
    for (int i = 0; i < cityLen; i++)
    {
        printf("\n%c", city[i]);
    }

return 0;
}