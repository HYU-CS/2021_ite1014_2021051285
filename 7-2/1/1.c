#include <stdio.h>

int main()
{
    float f1 = 1.23456789;
    float f2 = 0.0000123456789;

    printf("%.10f %.10f\n", f1, f2);
    printf("%e %e\n", f1, f2);
    printf("%E %E\n", f1, f2);
    printf("%g %g\n", f1, f2);
    printf("%G %G\n", f1, f2);
}