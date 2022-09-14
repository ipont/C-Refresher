#include <stdio.h>
#include <stdlib.h>

#define LEN 5

// initializing arrays
int main()
{
    int a[LEN]; // len 5, contains unpredictable elements

    for (int i = 0; i < LEN; i++)
    {
        a[i] = 1;
    }

    int x[] = {1, 2, 3, 4, 5};
    int y[LEN] = {1, 2, 3}; // y has type int[5], holds 1,2,3,0,0
    int z[LEN] = {0};       // z contains all 0s

    // Array initialization with designators (sparse array)
    int w[LEN] = {[1] = 1, [3] = 1}; // holds 0,1,0,1,0
    int q[LEN] = {[1] = 3, [LEN-1] = 5}; // holds 0,3,0,0,5
    int t[10] = {[0] = 5, 4, [LEN-3] = 3, 2, 1}; // holds 5,4,0,0,0,0,0,3,2,1
    return EXIT_SUCCESS;
}
