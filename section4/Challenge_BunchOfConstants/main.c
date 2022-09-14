#include <stdio.h>
#include <stdlib.h>

/**
 * === Bunch Of Constants === 
 *
 * Define the following numeric constants:
 *  - moonLanding: 1969
 *  - speedOfLight: 299792458
 *  - pi: 3.142
 *  - hexaDead: 0xDEAD
 *  - hexaSecret: 51966
 * 
 * Print with following formats:
 *  - moonLanding:
 *      - integer, 10 characters width, padded with spaces
 *      - integer, 10 characters width, padded with zeroes
 *  - speedOfLight:
 *      - floating point without digits after decimal point
 *      - scientific notation with 3 digit of precision
 *  - pi:
 *      - floating point with 2 digits of precision
 *      - scientific notation with 1 digit of precision, sign forced
 *  - hexaDead:
 *      - unsigned hexadecimal integer, uppercase, leading 0x
 *      - unsigned integer, 6 characters width
 *  - hexaSecret:
 *      - unsigned hexadecimal integer, lowercase, no leading 0x
 * 
 */



int main()
{
    const int moonLanding = 1969;
    const double speedOfLight = 299792458;
    const float pi = 3.142;
    const unsigned hexaDead = 0xDEAD;
    const unsigned hexaSecret = 51966;


    printf("Moon landing:\n %10d\n %010d\n\n", moonLanding, moonLanding);    
    printf("Speed of light:\n %.0f\n %.3fe\n\n", speedOfLight, speedOfLight);
    printf("Pi:\n %.2f\n %.1fe\n\n", pi, pi);
    printf("Hexa dead:\n 0x%X\n %6u\n\n", hexaDead, hexaDead);
    printf("Hexa secret:\n %x\n\n", hexaSecret);

    return EXIT_SUCCESS;
}
