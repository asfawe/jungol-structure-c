// 정올 구조체 - 자가진단5

// 근데 코드가 오지게 이상하다... 좀 수정해야 할 듯...

// 다시 보니깐 구조체 이름도 이상하네 ㅋㅋㅋㅋㅋ p10-modify참고 하세요~!

#include <stdio.h>
#include <string.h>

struct savingKing
{
    int a[10];
    int min;
    int min_location;
    char first_name[20];
    char second_name[20];
    char third_name[20];
    char fourth_name[20];
    char fifth_name[20];
};

int main()
{
    struct savingKing sk;

    scanf("%s", sk.first_name);
    scanf("%d", &sk.a[0]);
    scanf("%s", sk.second_name);
    scanf("%d", &sk.a[1]);
    scanf("%s", sk.third_name);
    scanf("%d", &sk.a[2]);
    scanf("%s", sk.fourth_name);
    scanf("%d", &sk.a[3]);
    scanf("%s", sk.fifth_name);
    scanf("%d", &sk.a[4]);

    sk.min = sk.a[0];
    sk.min_location = 0;
    for (int i = 0; i < 5; i++)
    {
        if (sk.a[i] < sk.min)
        {
            sk.min = sk.a[i];
            sk.min_location = i;
        }
    }
    if (sk.min_location == 0)
    {
        printf("%s %d", sk.first_name, sk.min);
    }
    else if (sk.min_location == 1)
    {
        printf("%s %d", sk.second_name, sk.min);
    }
    else if (sk.min_location == 2)
    {
        printf("%s %d", sk.third_name, sk.min);
    }
    else if (sk.min_location == 3)
    {
        printf("%s %d", sk.fourth_name, sk.min);
    }
    else if (sk.min_location == 4)
    {
        printf("%s %d", sk.fifth_name, sk.min);
    }

    return 0;
}