#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 *  === Sphere ===
 *
 * calculate the surphace and volume of a sphere
 *
 * Goals:
 *  - user enter radius
 *  - calculate surphace area and volume
 *  - print radius and results in decimal format (2 digits precision)
 *  - print radius and results in scientific notation (3 digits precision)
 * */

int main()
{
    const double pi = 3.14159265359;

    double radius;
    printf("Enter radius:");
    scanf("%lf", &radius);

    double surface_area = 4 * pi * pow(radius, (double)2);
    double volume = (4 / 3) * pi * pow(radius, (double)3);

    printf("Radius: %.2lf, Surface Area: %.2lf, Volume: %.2lf\n", radius, surface_area, volume);
    printf("Radius: %.3e, Surface Area: %.3e, Volume: %.3e\n", radius, surface_area, volume);

    return EXIT_SUCCESS;
}
