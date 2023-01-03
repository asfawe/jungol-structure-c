// 정올 구조체 연습문제 2

#include <stdio.h>
#include <string.h>

struct best_friend
{
    char my_name[20];
    int my_age;
    char friend_name[20];
    int friend_age;
};

int main()
{
    struct best_friend bf;
    printf("친한 친구의 이름과 나이를 입력하세요. ");
    strcpy(bf.my_name, "손예준");
    bf.my_age = 12;
    scanf("%s", bf.friend_name);
    scanf("%d", &bf.friend_age);

    printf("당신의 이름 : %s, 나이 : %d\n", bf.my_name, bf.my_age);
    printf("친구의 이름 : %s, 나이 : %d", bf.friend_name, bf.friend_age);

    return 0;
}