#include <stdio.h>

int main(void)
{
    int arr[5];

    int min, max, sum;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }

    min = max = sum = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }

        if(max < arr[i])
        {
            max = arr[i];
        }

        sum += arr[i];
    }

    printf("min: %d\n", min);
    printf("max: %d\n", max);
    printf("sum: %d\n", sum);

    return 0;
}