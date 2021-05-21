#include <stdio.h>

void getSumDiff(int a, int b, int *pSum, int *pDiff);

int main(void)
{
    int a, b;
    int sum, diff;

    scanf("%d%d", &a, &b);

    getSumDiff(a, b, &sum, &diff);

    printf("sum: %d\n", sum);
    printf("diff: %d\n", diff);

    return 0;
}

void getSumDiff(int a, int b, int *pSum, int *pDiff)
{
    *pSum = a + b;
    *pDiff = a - b;
}