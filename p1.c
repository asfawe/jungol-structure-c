// 정올 포인터 연습문제 1

#include <stdio.h>

struct who
{
    int age;
    char name[10];

}; // 구조체 생성 후.

int main()
{
    struct who w; // 구조체 변수명 정해줘야 함.
    printf("당신의 이름은 무엇입니까? ");
    scanf("%s", w.name);
    printf("당신의 나이는 몇 살입니까? ");
    scanf("%d", &w.age);

    printf("당신의 이름은 %s이고 나이는 %d세이군요.\n", w.name, w.age);

    return 0;
}