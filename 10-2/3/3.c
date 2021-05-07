#include <stdio.h>

int main(void)
{
    double arr[5];
    double *parr = arr;
    double sum = .0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%lf", parr + i);
    }

    for(int i = 0; i < 5; i++)
    {
        *(parr + i) *= 2.0;
    }
    for(int i = 0; i < 5; i++)
    {
        sum += *(parr + i);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%f\n", *(parr + i));
    }
    printf("sum: %f\n", sum);

    return 0;
}