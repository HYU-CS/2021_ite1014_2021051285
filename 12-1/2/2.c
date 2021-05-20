#include <stdio.h>

struct Person
{
    char name[12];
    int age;
};

int main(void)
{
    struct Person person;

    scanf("%s%d", person.name, &person.age);

    printf("name: %s\n", person.name);
    printf("age: %d\n", person.age);

    return 0;
}