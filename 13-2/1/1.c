#include <stdio.h>

void printArray(const char *const *arr, int len);
void swap(const char **arr);

int main(void)
{
    const char *const arr[2] = { "aaa", "bbb" };

    printArray(arr, 2);

    swap(arr);

    printArray(arr, 2);

    return 0;
}

void printArray(const char *const *arr, int len)
{
    printf("Array");

    for(int i = 0; i < len; i++)
    {
        printf(" [%d]:%s,", i, arr[i]);
    }

    printf("\n");
}

void swap(const char **arr)
{
    const char *temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}