#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;


int main(void)
{
    Point *pos = (Point *)malloc(sizeof(Point));

    scanf("%d%d", &pos->xpos, &pos->ypos);

    printf("%d %d\n", pos->xpos, pos->ypos);

    free(pos);

    return 0;
}