#include <stdio.h>
#include <stdlib.h>

#define X_LEN 10

int sum_arr(int arr[], const int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int sum_ptr(const int *const p, const int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += p[i];
    }
    return sum;
}

int sum_ptr_arithmetic(const int *const p, const int len)
{
    int sum = 0;
    for (const int *p_item = p; p_item < p + len; p_item++)
    {
        sum += *p_item;
    }
    return sum;
}

int main()
{
    int x[X_LEN] = {1, 4, -3, 2};

    printf("sum_arr: %d\n", sum_arr(x, X_LEN));
    printf("sum_ptr: %d\n", sum_ptr(x, X_LEN));

    printf("---\n");

    int *ptr = x;
    printf("%ld, %d\n", (__uint64_t)ptr, *ptr);
    ptr++;
    printf("%ld, %d\n", (__uint64_t)ptr, *ptr);

    printf("---\n");
    printf("sum_ptr_arithmetic: %d\n", sum_ptr_arithmetic(x, X_LEN));
    /**
     * Illegal opperations on pointers:
     * pointer + pointer
     * pointer / pointer
     * pointer * pointer
     * pointer % pointer
     */

    return EXIT_SUCCESS;
}
