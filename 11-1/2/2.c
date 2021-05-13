#include <stdio.h>

int main(void)
{
    char str[16];

    scanf("%s", str);

    for(int i = 0; i < 16 && str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            printf("%c", toupper(str[i]));
        else if(str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", tolower(str[i]));
    }

    printf("\n");

    return 0;
}