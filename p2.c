// 정올 포인터 자가진단 1

#include <stdio.h>

struct student
{
    char name[20];
    char school[20];
    int grade;
};

int main()
{
    struct student s;
    scanf("%s", s.name);
    scanf("%s", s.school);
    scanf("%d", &s.grade);

    printf("Name : %s\n", s.name);
    printf("School : %s\n", s.school);
    printf("Grade : %d\n", s.grade);

    return 0;
}