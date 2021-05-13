#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[16], str2[16];
    char joined_str[32];

    scanf("%s %s", str1, str2);

    strcpy(joined_str, str1);
    strcat(joined_str, str2);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("length of str1: %ld\n", strlen(str1));
    printf("length of str2: %ld\n", strlen(str2));
    printf("str1+str2: %s\n", joined_str);

    if(strcmp(str1, str2) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("not same\n");
    }
}