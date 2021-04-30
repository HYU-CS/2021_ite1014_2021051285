#include <stdio.h>

int combination(int n, int r);

int main()
{
    int n, r;

    scanf("%d%d", &n, &r);

    printf("%d\n", combination(n, r));

    return 0;
}

int combination(int n, int r)
{
    if(n == r)
        return 1;
    else if(r == 0)
        return 1;
    else
        return combination(n - 1, r - 1) + combination(n - 1, r);
}