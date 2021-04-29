#include <stdio.h>

int addTotal(int n);
void mulTotal(int n);

int gMul = 1;

int main()
{
    int n;

    scanf("%d", &n);

    mulTotal(n);

    printf("addTotal(): %d\n", addTotal(n));
    printf("gMul: %d\n", gMul);

    return 0;
}

int addTotal(int n)
{
    return n * (n + 1) / 2;
}

void mulTotal(int n)
{
    for(int i = 2; i <= n; i++)
    {
        gMul *= i;
    }
}