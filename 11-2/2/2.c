#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]);

int main(void)
{
    char str[16];

    scanf("%s", str);

    if(isPalindrome(str))
    {
        printf("This is a palindrome\n");
    }
    else
    {
        printf("This is not a palindrome\n");
    }

    return 0;
}

int isPalindrome(char str[])
{
    int len = strlen(str);

    for(int i = 0; i < len / 2; i++)
    {
        if(tolower(str[i]) != tolower(str[len - 1 - i]))
            return 0;
    }

    return 1;
}