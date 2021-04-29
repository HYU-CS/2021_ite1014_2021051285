#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
double div(int a, int b);
int mod(int a, int b);
void printMsg();

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    printf("sum: %d\n", add(a, b));
    printf("difference: %d\n", sub(a, b));
    printf("product: %d\n", mul(a, b));
    printf("division: %f\n", div(a, b));
    printf("remainder: %d\n", mod(a, b));
    printMsg();

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

double div(int a, int b)
{
    return (double)a / b;
}

int mod(int a, int b)
{
    return a % b;
}

void printMsg()
{
    printf("completed\n");
}