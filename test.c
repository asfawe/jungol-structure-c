#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <math.h>

// 두 점 사이의 거리를 구하는 함수
double get_distance(double x1, double y1, double x2, double y2);

int main(void)
{
    int x1, x2, y1, y2;

    printf("첫번째 점의 좌표를 입력하시오: (x, y) ");
    scanf("%d %d", &x1, &y1);
    printf("두번째 점의 좌료플 입력하시오: (x, y) ");
    scanf("%d %d", &x2, &y2);

    printf("두점 사이의 거리는 %f입니다.\n", get_distance(x1, y1, x2, y2));
    return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}