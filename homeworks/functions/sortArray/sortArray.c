/********************************
* Filename: sortArray.c
* 
* author: filbri
* created: 2019-10-28
* 
* notes: 
* 
* ver: 2019-10-28 first version
* ******************************/

#include <stdio.h>
#include <stdlib.h>

void sortIntArray(int *data, int size);

int main()
{
    int data[] = {12, 5, 8, 10, 4};

    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", data[i]);
    }
    printf("\n");
    sortIntArray(data, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", data[i]);
    }

    return 0;
}

void sortIntArray(int *data, int size)
{
    for (int i = size; i > 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (*(data + j) > *(data + j + 1))
            {
                int temp = *(data + j + 1);
                *(data + j + 1) = *(data + j);
                *(data + j) = temp;
            }
        }
    }
}