#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[7];
    int score;
} Person;

void printScoreStars(const Person *persons, int len);

int main(void)
{
    Person *person_arr = NULL;
    int len = 0;

    while(1)
    {
        char name[7];
        int score = 0;

        scanf("%s%d", name, &score);

        if(strcmp(name, "END") != 0 || score != 0)
        {
            Person *temp = (Person *)malloc(sizeof(Person) * (len + 1)); // [0] to [len]
            if(temp == NULL)
            {
                printf("Out of Memory! Heap Space\n");
                return -1;
            }

            for(int i = 0; i < len; i++) // copy from [0] to [len - 1]
            {
                temp[i] = person_arr[i];
            }
            
            free(person_arr); // memory-free for preventing memory leak
            person_arr = temp;

            strcpy(person_arr[len].name, name); // [len] == last index
            person_arr[len].score = score;

            len++; // count of from [0] to [len]: len + 1 
        }
        else
        {
            break;
        }
    }

    printScoreStars(person_arr, len);

    free(person_arr);

    return 0;
}

void printScoreStars(const Person *persons, int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%-10s ", persons[i].name);

        for(int j = 0; j < persons[i].score / 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}