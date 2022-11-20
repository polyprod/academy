/********************************
* Filename: modeValue.c
* 
* author: filbri
* created: 2019-10-28
* 
* notes: This program shows an example of how to calculate the mode in an array.
* 
* ver: 2019-10-28 first version
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
    int numbers[] = {2, 2, 2, 2, 2, 3, 3, 3, 3, 3};
    int maxCount = 0;
    int mode = 0;
    // find mode algorithm
    for (int i = 0; i < 10; i++)
    {
        int ctr = 0; // reset for each new outer loop
        for (int j = i + 1; j < 10; j++)
        {
            if (numbers[j] == numbers[i])
            {
                ctr++;
            }
        }
        if (ctr > maxCount)
        {
            maxCount = ctr;
            mode = numbers[i];
        }
    }
    printf("%d", mode);
return 0;
}