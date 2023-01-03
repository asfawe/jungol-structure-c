#include <stdio.h>

struct calculation
{
    double x;
    double y;
};

int main()
{
    struct calculation c1;
    struct calculation c2;

    printf("점의 좌표는?(x,y) ");
    scanf("%lf", &c1.x);
    scanf("%lf", &c1.y);
    printf("점의 좌표는?(x,y) ");
    scanf("%lf", &c2.x);
    scanf("%lf", &c2.y);

    printf("중심점의 위치 = (%.1lf, %.1lf)", (c1.x + c2.x) / 2, (c1.y + c2.y) / 2);

    return 0;
}