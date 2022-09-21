#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char my_string[] = "I love programming in C!";
    printf("The string: \"%s\"", my_string);

    int i;
    for (i = 0; my_string[i] != '\0'; i++);
    printf("String length (with loop): %d\n", i);
    printf("Sizeof string: %ld\n", sizeof(my_string));

    printf("String length (built in): %ld\n", strlen(my_string));

    return EXIT_SUCCESS;
}
