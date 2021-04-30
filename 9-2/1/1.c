#include <stdio.h>

void printLine(int n);

int main(void)
{
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printLine(i);
    }
    for(int i = n; i > 0; i--)
    {
        printLine(i);
    }

    return 0;
}

void printLine(int n)
{
    for(int i = 0; i < n * 2 - 1; i++)
    {
        if(i % 2 == 0)
            printf("%d", i / 2 + 1);
        else
            printf(" ");
    }
    printf("\n");
}