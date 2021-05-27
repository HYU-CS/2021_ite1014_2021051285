#include <stdio.h>

const double PI = 3.141592;

int main(void)
{
    double radius;

    scanf("%lf", &radius);

    printf("Perimeter: %f\n", 2.0 * PI * radius);
    printf("Area: %f\n", PI * radius * radius);

    return 0;
}