#include <stdio.h>

typedef struct
{
    char name[12];
    int age;
} Person;

int main(void)
{
    Person person;

    scanf("%s%d", person.name, &person.age);

    printf("name: %s\n", person.name);
    printf("age: %d\n", person.age);

    return 0;
}