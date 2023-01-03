#include <stdio.h>
#include <string.h>

typedef struct People
{
    char name[20];
    int height;
    float weight;
} People;

int main()
{
    People tmp;
    People a[5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        scanf("%s %d %f", a[i].name, &a[i].height, &a[i].weight);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (strcmp(a[i].name, a[j].name) > 0)
            // str1 > str2 인 경우에는 양수 반환을 하기 때문에 위 if문이 동작함.
            {
                tmp = a[i];
                a[i] = a[j]; // 더 작은 a[j]의 값을 a[i]로 넣는다??
                a[j] = tmp;  // 그 후 a[i]의 값을 a[j]가 갖는다??

                // 왜냐하면 우리는 알파벳 순서대로 정렬을 할거기 때문입니다.
                // a가 b작고 b가 c보다 작기 때문에 이렇게 작업하는 겁니다.
            }
        }
    }
    printf("name\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s %d %.1f\n", a[i].name, a[i].height, a[i].weight);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (a[i].weight < a[j].weight)
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    printf("\nweight\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s %d %.1f\n", a[i].name, a[i].height, a[i].weight);
    }

    return 0;
}