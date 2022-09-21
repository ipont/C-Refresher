#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char my_string[] = "I love programming in c\n";

    char another_string[] = "Pragramming is funny";
    printf("Before copy: \"%s\"\n", my_string);
    printf("After copy: \"%s\"\n", strcpy(my_string, another_string));
    // strcpy does not check size of destination str vs origin str

    char another_long_string[] = "This is a dummy ver very long string...";
    printf("Before copy: \"%s\"\n", my_string);
    printf("After copy: \"%s\"\n", strncpy(my_string, "Hello", sizeof(my_string)));

    printf("Before copy: \"%s\"\n", my_string);
    strncpy(my_string, another_long_string, sizeof(my_string));
    my_string[sizeof(my_string) - 1] = '\0';
    printf("After copy: \"%s\"\n", my_string);

    // string compare
    char str_1[] = "abcd";
    char str_2[] = "abcz";

    printf("strcmp %s, %s: %d\n", str_1, str_2,strcmp(str_1, str_2));
    printf("strncmp %s, %s: %d\n", str_1, str_2,strncmp(str_1, str_2,3));

    return EXIT_SUCCESS;
}
