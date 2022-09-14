#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Null pointers
    int *ptr = NULL;

    if (ptr != NULL)
    {
        printf("1 | Pointed value: %d\n", *ptr);
    }

    // NULL = ((void *)0) so NULL can be tested as 0/false
    if (ptr)
    {
        printf("1 | Pointed value: %d\n", *ptr);
    }

    int someValue = 69;

    if (!ptr)
    {
        ptr = &someValue;
    }

    if (ptr)
    {
        printf("2 | Pointed value: %d\n", *ptr);
    }

    return EXIT_SUCCESS;
}
