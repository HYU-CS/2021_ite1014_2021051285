#include <stdio.h>
#include <stdbool.h>

int main()
{
    char ch;
    while(true)
    {
        scanf("%c", &ch);

        if(ch >= 'A' && ch <= 'Z')
        {
            printf("-> %c\n", ch - 'A' + 'a');
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            printf("-> %c\n", ch - 'a' + 'A');
        }
        else if(ch >= '0' && ch <= '9')
        {
            printf("-> %c\n", ch);
        }
        else if(ch == '\n')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    printf("exit\n");
}