#include <stdio.h>

struct savingKing
{
    int a[10];
    int max;
    int max_location;
};

int main()
{
    struct savingKing sk;

    for (int i = 0; i < 5; i++)
    {
        printf("%d번 저축금액은? ", i + 1);
        scanf("%d", &sk.a[i]);
    }

    sk.max = sk.a[0];
    for (int i = 0; i < 5; i++)
    {
        if (sk.a[i] > sk.max)
        {
            sk.max = sk.a[i];
            sk.max_location = i + 1;
        }
    }

    printf("저축왕 %d번 %d원", sk.max_location, sk.max);

    return 0;
}