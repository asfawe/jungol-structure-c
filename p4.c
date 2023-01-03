// 정올 구조체 자가진단 2

#include <stdio.h>
#include <string.h>

struct student
{
    char old_school[20];
    int old_grade;
    char new_school[20];
    int new_grade;
};

int main()
{
    struct student st;
    strcpy(st.old_school, "Jejuelementary");
    st.old_grade = 6;
    scanf("%s", st.new_school);
    scanf("%d", &st.new_grade);

    printf("%d grade in %s School\n", st.old_grade, st.old_school);
    printf("%d grade in %s School", st.new_grade, st.new_school);

    return 0;
}