#include <stdio.h>

void square(double *dp);

int main(void)
{
    double dvar;

    scanf("%lf", &dvar);

    square(&dvar);

    printf("%f\n", dvar);

    return 0;
}

void square(double *dp)
{
    *dp *= *dp;
}