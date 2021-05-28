#include <stdio.h>
#include <string.h>

int getWord(char (*str)[24], int index);
int findWord(const char (*str)[24], int len);

int main(void)
{
    char str[10][24];
    int count;

    for(count = 0; count < 10; count++)
    {
        if(!getWord(str, count))
            break;
    }

    printf("%d words in the list:\n", count);
    for(int i = 0; i < count; i++)
    {
        printf("%s ", str[i]);
    }
    printf("\n");

    while(findWord(str, count));
}

int getWord(char (*str)[24], int index)
{
    while(1)
    {
        int do_continue = 0;
        printf("Enter a word (Enter 'end' to quit): ");
        scanf("%s", str[index]);

        for(int i = 0; i < index; i++)
        {
            if(strcmp(str[index], str[i]) == 0)
            {
                do_continue = 1;
                break;
            }
        }

        if(do_continue)
        {
            printf("This word already exists. Please enter another word.\n");
        }
        else
        {
            break;
        }
    }

    if(strcmp(str[index], "end") == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int findWord(const char (*str)[24], int len)
{
    char search[24];
    int found = 0;

    printf("Enter a word to search (Enter 'end' to quit): ");
    scanf("%s", search);

    if(strcmp(search, "end") == 0)
    {
        return 0;
    }

    for(int i = 0; i < len; i++)
    {
        if(strcmp(search, str[i]) == 0)
        {
            found = 1;
            break;
        }
    }

    if(found)
    {
        printf("This word is in the list.\n");
    }
    else
    {
        printf("This word is NOT in the list.\n");
    }

    return 1;
}