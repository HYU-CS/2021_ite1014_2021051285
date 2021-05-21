#include <stdio.h>

typedef struct
{
    char name[7];
    int score;
} Person;

void printScoreStars(const Person* persons, int len);

int main(void)
{
    Person person_arr[3];

    for(int i = 0; i < 3; i++)
    {
        scanf("%s%d", person_arr[i].name, &person_arr[i].score);
    }

    printScoreStars(person_arr, 3);

    return 0;
}

void printScoreStars(const Person* persons, int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%-7s", (persons + i)->name);

        for(int j = 0; j < (persons + i)->score / 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}