#include <stdio.h>
#include <stdlib.h>

/**
 * === Float Decomposition ===
 * 
 * Build a program that decomposes integer and fractional parts of a floating point number
 * 
 * Goals:
 *  - Write func that receives a float and returns an int
 *    and fractional part (float)
 *  - Acquire a float from the keyboard
 *  - use decompose func to print int and fraction to screen
 *  - reconstruct original float and print it
 */

void decompose(float *const input, int *integer, float *fraction){
    // printf("testing int: %d", (int)*input);
    *integer = (int)*input;
    *fraction = *input - *integer;
}

int main()
{
    float inputFloat, fraction;
    int integer;

    printf("Enter a floating point number:\n");
    scanf("%f", &inputFloat);

    decompose(&inputFloat, &integer, &fraction);

    printf("Original: %f, Integer: %d, Fraction: %f\n", inputFloat, integer, fraction);
    printf("Integer: %d, Fraction: %f, Reconstructed: %f\n", integer, fraction, fraction + (float)integer);

    return EXIT_SUCCESS;
}
