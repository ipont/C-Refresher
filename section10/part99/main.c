#include <stdio.h>
#include <stdlib.h>

// pointers and arrays
int main()
{
    int x[] = {9, 8, 7, 6, 5};
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        printf("x[i]: %d\n", x[i]);
    }

    printf("Access an element of x with a pointer:\n");
    int *p = &x[2];
    printf("x[2]: %d, *p: %d\n", x[2], *p);
    *p = 0;
    printf("x[2]: %d, *p: %d\n", x[2], *p);

    printf("Array address:\n");
    printf("&x[0]: %lX\n", (__uint64_t)&x[0]);
    printf("x:     %lX\n", (__uint64_t)x);

    p = x;

    printf("Display x through the pointer:\n");
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        printf("i: %d, x[i]: %d, p[i]: %d\n", i, x[i], p[i]);
    }

    printf("Set x to 0, 1, 2, 3, 4 using the pointer:\n");
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        p[i] = i;
        printf("i: %d, x[i]: %d, p[i]: %d\n", i, x[i], p[i]);
    }

    return EXIT_SUCCESS;
}
