#include <stdio.h>

struct student
{
    char name[20];
    int korean;
    int english;
};

int main()
{
    struct student a;
    struct student b;

    scanf("%s", a.name);
    scanf("%d", &a.korean);
    scanf("%d", &a.english);

    scanf("%s", b.name);
    scanf("%d", &b.korean);
    scanf("%d", &b.english);

    printf("%s %d %d  \n", a.name, a.korean, a.english);
    printf("%s %d %d  \n", b.name, b.korean, b.english);

    printf("avg %d %d ", (a.korean + b.korean) / 2, (a.english + b.english) / 2);

    return 0;
}