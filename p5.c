// 정올 구조체 연습문제 3-1, 3-2

#include <stdio.h>
#include <string.h>

struct student
{
    char first_name[20];
    char second_name[20];
    int first_korean;
    int first_english;
    int second_korean;
    int second_english;
};

int main()
{
    struct student st;

    scanf("%s", st.first_name);
    scanf("%d", &st.first_english);
    scanf("%d", &st.first_korean);

    scanf("%s", st.second_name);
    scanf("%d", &st.second_english);
    scanf("%d", &st.second_korean);

    printf("%s %d %d\n", st.first_name, st.first_english, st.first_korean);
    printf("%s %d %d\n", st.second_name, st.second_english, st.second_korean);

    printf("합계 %d %d", st.first_english + st.second_english, st.first_korean + st.second_korean);

    return 0;
}