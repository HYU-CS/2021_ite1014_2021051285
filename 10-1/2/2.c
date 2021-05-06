#include <stdio.h>

int main(void)
{
    int i;
    double d;
    char c;

    int *pi;
    double *pd;
    char *pc;

    scanf("%d %lf %c", &i, &d, &c);

    printf("i: %d, %p\n", i, &i);
    printf("d: %f, %p\n", d, &d);
    printf("c: %c, %p\n", c, &c);

    printf("\n");

    pi = &i;
    pd = &d;
    pc = &c;

    (*pi)++;
    (*pd)++;
    (*pc)++;

    printf("i+1: %d\n", i);
    printf("d+1: %f\n", d);
    printf("c+1: %c\n", c);
    
    printf("\n");

    printf("size of pi: %zu\n", sizeof(pi));
    printf("size of pd: %zu\n", sizeof(pd));
    printf("size of pc: %zu\n", sizeof(pc));

    return 0;
}