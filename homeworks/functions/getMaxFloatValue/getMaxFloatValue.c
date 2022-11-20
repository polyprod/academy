/********************************
* Filename: getMaxFloatValue.c
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

int getMaxFloatValue(float *array, int arraySize, float *maxValue);

int main()
{
    float numbers[] = {5.42, 87.12, 87.12, 2.15, 10.12};
    float maxValue;
    getMaxFloatValue(numbers, 5, &maxValue);
    printf("\nMax value is: %.2f", maxValue);
    
    printf("\nAmount of max values: %d", getMaxFloatValue(numbers, 5, &maxValue));
    

    return 0;
}

int getMaxFloatValue(float *array, int arraySize, float *maxValue)
{
    
    int amountOfMaxValues = 0;

    // sort the array
    for (int i = arraySize; i > 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (*(array + j) > *(array + j + 1))
            {
                int temp = *(array + j + 1);
                *(array + j + 1) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
    *maxValue = *(array + arraySize - 1);

    for (int i = 0; i < arraySize; i++)
    {
        if (array[arraySize - 1] == array[i])
        {
            amountOfMaxValues++;
        }
    }
    return amountOfMaxValues;
}