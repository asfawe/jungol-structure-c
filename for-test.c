#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (strcmp("b", "a") > 0)
                printf("%d : %d\n", i, j);
        }
    }

    return 0;
}
