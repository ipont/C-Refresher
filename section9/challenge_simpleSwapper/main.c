#include <stdio.h>
#include <stdlib.h>

/**
 * === Simple Swapper ===
 *
 * Build a program that exhanges two integer values
 *
 * Goals:
 *  - swap operation inside function
 *  - function must exchange values of two ints declared in main
 *
 *  Use const keyword
 */

int swap(int *const a, int *const b)
{
    if (a && b)
    {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
        return 0;
    }

    return -1;
}

int main()
{
    int a = 1, b = 999;
    int *const a_ptr = &a;
    int *const b_ptr = &b;

    printf("1 | A: %d, B: %d\n", *a_ptr, *b_ptr);

    if (swap(a_ptr, b_ptr))
    {
        printf("Warning: Error swapping, NULL pointer passed");
    }

    printf("2 | A: %d, B: %d\n", *a_ptr, *b_ptr);

    return EXIT_SUCCESS;
}
