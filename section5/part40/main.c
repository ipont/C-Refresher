#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    // & : bit clearing = mask is 0 -> result is 0
    // & : bit testing  = mask is 1 -> input pass
    // | : bit setting  = mask is 1 -> result is 1
    // ^ : bit toggling = mask is 1 -> input toggled

    uint8_t data = 0b11101001;

    // select bits [2:5]
    uint8_t result = (data >> 3) & 0b111;
    // result   00000101

    return EXIT_SUCCESS;
}
