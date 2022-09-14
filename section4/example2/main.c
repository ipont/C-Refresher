#include <stdio.h>
#include <stdlib.h>

/**
 * === Spaceship Thrust === 
 *
 * We are working on the man-machine interface of a revolutionary spaceship.
 * Define enumeration constants for different predefined thrust levels, these
 * levels will be used to communicate with the engine controller.
 * 
 * The thrust levels are:
 *  - none:     0
 *  - low:      5
 *  - medium:   9
 *  - high:     12
 *  - maximum:  20
 * 
 * Then launch the rocket!
 * We now want to log the thrust level in some critical points:
 *  - set thrust to none ---> log ready to go level
 *  - set thrust to maximum ---> log take off level
 *  - set thrust to medium ---> log entry into the ionosphere
 *  - set thrust to low ---> log traveling to deep space
 * 
 */

typedef enum {
    NONE = 0,
    LOW = 5,
    MEDIUM =9,
    HISH = 12,
    MAXIMUM = 20
} Thrust;

int main()
{
    Thrust rocket = NONE;
    printf("Ready to go level: %d\n", rocket);

    rocket = MAXIMUM;
    printf("Take off level: %d\n", rocket);

    rocket = MEDIUM;
    printf("Entry into the ionosphere: %d\n", rocket);

    rocket = LOW;
    printf("Traveling to deep space: %d\n", rocket);

    return EXIT_SUCCESS;
}
