#include <stdio.h>

int main(void)
{
    int i;
    int *pi;

    scanf("%d", &i);

    pi = &i;

    printf("%d\n", *pi);

    *pi += 10;

    printf("%d\n", *pi);

    return 0;
}