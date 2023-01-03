#include <stdio.h>
#include <string.h>

typedef struct People
{
    char name[21]; // \0(NULL)
    int height;
    double weight;

} People;

int main()
{
    People tmp;
    People a[5];

    int i, j;

    for (i = 0; i < 5; i++)
    {
        scanf("%s %d %lf", a[i].name, &a[i].height, &a[i].weight);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (strcmp(a[i].name, a[j].name) > 0)
            {
                tmp = a[i]; // a[i]의 모든것을 넣어주는 겁니다.
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("name\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s %d %.1lf", a[i].name, a[i].height, a[i].weight);
        printf("\n");
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

    printf("weight\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s %d %.1lf", a[i].name, a[i].height, a[i].weight);
        printf("\n");
    }

    return 0;
}