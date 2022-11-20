/********************************
* Filename: getMinIntValue.c
* 
* author: filbri
* created: 2019-10-28
* 
* notes: 
* 
* ver: 2019-10-28 first version
* ******************************/

#include<stdio.h>
#include<stdlib.h>

void getMinIntValue(int *data, int size, int *min);
void sortIntArray(int *data, int size);

int main()
{
    int data[] = {12, 5, 8, 10, 4};
    int minValue;

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

    getMinIntValue(data, 5, &minValue);
    printf("\nMin value is: %d.", minValue);
    

    return 0;
}

void getMinIntValue(int *data, int size, int *min)
{
    sortIntArray(data, size);
    *min = *data;   // change the value in the memory location where min points to
                    // since *data points to first element in the array, and the array been sorted in
                    // ascending order, the first element is also the minimum.
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