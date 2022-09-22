#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint8_t a = 12; /* ---> 0000 1100 */
    uint8_t b = 5;  /* ---> 0000 0101*/
    printf("A = %u\n", a);
    printf("B = %u\n", b);

    /** Bitwise AND
     * A =     0000 1100
     *  B =     0000 0101
     *  A & B = 0000 0100 = 4
     */
    printf("A & B = %u\n", a & b);

    /** Bitwise OR
     * A =     0000 1100
     *  B =     0000 0101
     *  A | B = 0000 1101 = 13
     */
    printf("A | B = %u\n", a | b);

    /** Bitwise XOR
     *  A =     0000 1100
     *  B =     0000 0101
     *  A ^ B = 0000 1001 = 9
     */
    printf("A ^ B = %u\n", a ^ b);

    /** Bitwise Left Shift (^2N)
     *  A =       0000 1100
     *  B =       0000 0101
     *  A << 1 =  0001 1000 = 24
     */
    printf("A << B = %u\n", a << 1U);

    /** Bitwise Right Shift (/ 2N)
     *  A =       0000 1100
     *  B =       0000 0101
     *  A >> 1 =  0000 0110 = 6
     */
    printf("A >> B = %u\n", a >> 1U);

    return EXIT_SUCCESS;
}
