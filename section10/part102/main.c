#include <stdio.h>
#include <stdlib.h>

void array_maker(int len)
{
    int vla[len];

    for (int i = 0; i < len; i++)
    {
        vla[i] = i;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", vla[i]);
    }
    printf("\n");
}

int main()
{
    while (1)
    {
        int len;
        printf("Enter array size:\n");
        scanf("%d", &len);
        if (len < 1) {
            break;
        }
        array_maker(len);
    }
    return EXIT_SUCCESS;
}
