#include <stdio.h>

int main()
{
    int a, b, c;
    int min, max;

    scanf("%d%d%d", &a, &b, &c);

    if(a >= b && a >= c)
    {
        max = a;
    }
    else if(b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    if(a <= b && a <= c)
    {
        min = a;
    }
    else if(b <= a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }

    printf("min: %d\n", min);
    printf("max: %d\n", max);
}