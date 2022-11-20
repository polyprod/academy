#include <stdio.h>

int main()
{
    int numbers[10] = {2, 2, 2, 2, 2, 3, 3, 3, 3, 3};
    int maxCount = 0;
    int mode = 0;

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