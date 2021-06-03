#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int *arr;
    int min, max;

    scanf("%d", &num);

    arr = (int *)malloc(sizeof(int) * num);

    for(int i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    min = arr[0];
    max = arr[0];

    for(int i = 1; i < num; i++)
    {
        if(min > arr[i])
            min = arr[i];
        if(max < arr[i])
            max = arr[i];
    }

    printf("min: %d\n", min);
    printf("max: %d\n", max);

    free(arr);

    return 0;
}