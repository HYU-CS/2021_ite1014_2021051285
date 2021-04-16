#include <stdio.h>

int main()
{
    float f1 = 1.23456789;
    float f2 = 0.0000123456789;

    printf("1) %.10f %.10f\n", f1, f2);
    printf("2) %e %e\n", f1, f2);
    printf("3) %E %E\n", f1, f2);
    printf("4) %g %g\n", f1, f2);
    printf("5) %G %G\n", f1, f2);
}