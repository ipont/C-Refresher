#include <stdio.h>
#include <stdlib.h>

int accumulate(int *const accumulator, int value)
{
    if (value > 0)
    {
        *accumulator += value;
        return 0;
    }
    else
    {
        return -1;
    }
}

int accumulateWrapper(int *const accumulator, int value)
{
    if (accumulate(accumulator, value))
    {
        printf("Warning! Value = %d\n", value);
    }
}

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

void printStudents(int students)
{
    printf("Students = %d\n", students);
}

int main()
{
    // functions and pointers
    int girls = 12, boys = 9;
    int students = sum(girls, boys);
    printStudents(students);

    int class_1 = 28, class_2 = 19, class_3 = -1;

    int accumulator = 0;
    accumulateWrapper(&accumulator, class_1);
    accumulateWrapper(&accumulator, class_2);
    accumulateWrapper(&accumulator, class_3);

    printf("Accumulator: %d\n", accumulator);

    return EXIT_SUCCESS;
}
