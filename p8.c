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
    struct calculation c3;

    scanf("%lf", &c1.x);
    scanf("%lf", &c1.y);
    scanf("%lf", &c2.x);
    scanf("%lf", &c2.y);
    scanf("%lf", &c3.x);
    scanf("%lf", &c3.y);

    printf("(%.1lf, %.1lf)", (c1.x + c2.x + c3.x) / 3, (c1.y + c2.y + c3.y) / 3);
}