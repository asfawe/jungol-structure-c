#include <stdio.h>
#include <string.h>

typedef struct People
{
    char name[20];
    int length;
} People;

int main()
{
    People a[5];

    int min_length;

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d", a[i].name, &a[i].length);
    }

    min_length = a[0].length;
    char min_name[20];
    strcpy(min_name, a[0].name);
    for (int i = 0; i < 5; i++)
    {
        if (min_length > a[i].length)
        {
            min_length = a[i].length;
            strcpy(min_name, a[i].name);
        }
    }

    printf("%s %d", min_name, min_length);

    return 0;
}