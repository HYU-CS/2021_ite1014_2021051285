#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }

    for(int i = 0, temp; i < 5 / 2; i++)
    {
        swap(arr + i, arr + 4 - i);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}