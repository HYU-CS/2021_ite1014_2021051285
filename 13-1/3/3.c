#include <stdio.h>

void printString(const char *str);

int main()
{
    char *arr[3] = { "One", "Two", "Three" };
    void (*fp)(const char *str);

    fp = printString;

    for(int i = 0; i < 3; i++)
    {
        fp(arr[i]);
    }

    return 0;
}

void printString(const char *str)
{
    printf("%s\n", str);
}