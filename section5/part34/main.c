#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter operand A (int):");
    scanf("%d", &a);

    printf("Enter operand B (int):");
    scanf("%d", &b);

    c = a + b;
    printf("c = a + b --> %d\n", c);

    c = a - b;
    printf("c = a - b --> %d\n", c);

    c = a * b;
    printf("c = a * b --> %d\n", c);

    c = a / b;
    printf("c = a / b --> %d\n", c);

    c = a % b;
    printf("c = a %% b --> %d\n", c);

    /* === Floats === */
    float af, bf, cf;
    printf("Enter operand A (float):");
    scanf("%f", &af);

    printf("Enter operand B (float):");
    scanf("%f", &bf);
    printf("\n");

    cf = af + bf;
    printf("c = a + b --> %9.3f\n", cf);

    cf = af - bf;
    printf("c = a - b --> %9.3f\n", cf);

    cf = af * bf;
    printf("c = a * b --> %9.3f\n", cf);

    cf = af / bf;
    printf("c = a / b --> %9.3f\n", cf);


    return EXIT_SUCCESS;
}
