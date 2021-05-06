#include <stdio.h>

int main()
{
    int i;
    char str[256];

    scanf("%s", str);

    for(i = 0; str[i] != '\0' && i < 256; i++);

    printf("%d\n", i);

    return 0;
}