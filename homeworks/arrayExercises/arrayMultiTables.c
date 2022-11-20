/********************************
* Filename: arrayMultiTables.c
* 
* author: filbri
* created: 2019-10-16
* 
* notes: this program creates a two dimensional array (10x3) with the 
* multiplication tables for 1-10.
* 
* ver: 2019-10-16 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
    // creating the array
    int numberTable[10][3];

    int ctr1 = 1; // ctr for 1st column 

    // loop for the 10 different tables
    for (int i = 0; i < 10; i++)
    {
        printf("\n****%d multiplication table****\n", ctr1);
        
        // fill rows 1-10 in 1st column (first iteration only 1s, second iteration only 2s, etcetera) 
        for (int j = 0; j < 10; j++)
        {
        numberTable[j][0] = ctr1;
        }
        
        int ctr2 = 1; // ctr for 2nd column 
        // fill rows 1-10 in 2nd column with 1-10
        for (int k = 0; k < 10; k++)
        {
        numberTable[k][1] = ctr2;
        ctr2++;
        }

        // print the rows in 1st column + multiplication sign
        for(int m = 0; m < 10; m++)
        {
        printf("%d", numberTable[m][0]);
        printf(" * ");

        // print the rows in 2nd column + equals sign
        printf("%d", numberTable[m][1]); 
        printf(" = ");

        // print the rows in 3rd column (result)
        printf("%d", numberTable[m][0] * numberTable[m][1]);
        printf("\n");
        }
        
        // increase ctr for 1st column (i.e. switch to new multiplication table)
        ctr1++; 
    }

return 0;
}