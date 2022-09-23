#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printBits(int8_t input)
{
    for (int i = sizeof(input) * 8 - 1; i >= 0; i--)
    {
        printf("%2d", (input & (1 << i)) >> i);
    }
    printf("\n");
}

int main()
{
    // & : bit clearing = mask is 0 -> result is 0
    // & : bit testing  = mask is 1 -> input pass
    // | : bit setting  = mask is 1 -> result is 1
    // ^ : bit toggling = mask is 1 -> input toggled

    // a << b ---> a * (2^b)
    int a = 5;
    printf("%d\n", a << 1);
    printf("%d\n", a << 2);
    printf("%d\n", a << 3);
    printf("%d\n", a << 4);

    // a >> ---> a / (2^b)
    a = 1000;
    printf("%d\n", a >> 1);
    printf("%d\n", a >> 2);
    printf("%d\n", a >> 3);
    printf("%d\n", a >> 4);

    // test each bit in b
    printBits(0x55);
    printBits(0xa3);
    printBits(0x9f);

    // clear bits [2:6] in 0x9f
    int8_t b = 0x9f;
    printf("Bits before clearing [2:6]:\n");
    printBits(b);

    int8_t mask = 0b11100011;
    printf("Bits after clearing [2:6]:\n");
    printBits(b & mask);

    // set bits [0:3]
    b = 0;
    printf("Bits before setting [0:3]:\n");
    printBits(b);

    mask = 0b00000111;
    printf("Bits after setting [0:3]:\n");
    printBits(b | mask);


    // toggle all bits
    b = 0x55;
    printf("Bits before toggle:\n");
    printBits(b);

    mask = 0b111111111;
    printf("Bits after toggle:\n");
    printBits(b ^ mask);


    return EXIT_SUCCESS;
}
