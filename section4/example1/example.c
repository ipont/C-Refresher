#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    unsigned students = 25U;
    unsigned long long worldPopulation = 7973934847ULL;
    printf("%12u | students in the class\n", students);
    printf("%12llu | world population now\n", worldPopulation);

    uint8_t count = UINT8_MAX;
    printf("%12u | count of something\n", count);

    count += 1;
    printf("%12u | count of something +1 (OVERFLOW)\n", count);

    printf("%12d | INT32_MIN\n", INT32_MIN);
    printf("%12d | INT32_MAX\n", INT32_MAX);
    printf("%12u | UINT32_MAX\n", UINT32_MAX);

    return EXIT_SUCCESS;
}