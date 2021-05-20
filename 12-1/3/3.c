#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point* point);

int main(void)
{
    Point p1;
    Point p_dest;

    scanf("%d%d", &p1.xpos, &p1.ypos);

    p_dest = getScale2xPoint(&p1);

    printf("%d %d\n", p_dest.xpos, p_dest.ypos);

    return 0;
}

Point getScale2xPoint(const Point* point)
{
    Point tempPoint;

    tempPoint.xpos = point->xpos * 2;
    tempPoint.ypos = point->ypos * 2;

    return tempPoint;
}